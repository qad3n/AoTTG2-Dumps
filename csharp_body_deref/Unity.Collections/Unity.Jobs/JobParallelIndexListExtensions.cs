// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.JobParallelIndexListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace Unity.Jobs;

[Token(Token = "0x2000006")]
[Obsolete("'JobParallelIndexListExtensions' has been deprecated; Use 'IJobFilterExtensions' instead.", false)]
public static class JobParallelIndexListExtensions
{
	[Token(Token = "0x600000C")]
	[Obsolete("The signature for 'ScheduleAppend' has changed. 'innerloopBatchCount' is no longer part of this API.", false)]
	public static JobHandle ScheduleAppend<T>(this T jobData, NativeList<int> indices, int arrayLength, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600000D")]
	[Obsolete("The signature for 'ScheduleFilter' has changed. 'innerloopBatchCount' is no longer part of this API.")]
	public static JobHandle ScheduleFilter<T>(this T jobData, NativeList<int> indices, int innerloopBatchCount, [Optional] JobHandle dependsOn) where T : struct, IJobFilter
	{
		return default(JobHandle);
	}
}
