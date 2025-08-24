#include <absl/log/globals.h>
#include <absl/log/initialize.h>
#include <absl/log/log.h>

int main()
{
    absl::InitializeLog();
    absl::SetStderrThreshold(absl::LogSeverityAtLeast::kInfo);

    LOG(INFO) << "Hello World!";
}
