// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.JobProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200048F")]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Native/Renderer/UIRendererJobProcessor.h")]
internal static class JobProcessor
{
	[Token(Token = "0x6001C5E")]
	[Address(RVA = "0x4F7FCB0", Offset = "0x4F7FCB0", VA = "0x4F7FCB0")]
	internal static JobHandle ScheduleNudgeJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x4F7FD40", Offset = "0x4F7FD40", VA = "0x4F7FD40")]
	internal static JobHandle ScheduleConvertMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x4F7FDD0", Offset = "0x4F7FDD0", VA = "0x4F7FDD0")]
	internal static JobHandle ScheduleCopyMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x4F7FD00", Offset = "0x4F7FD00", VA = "0x4F7FD00")]
	private static extern void ScheduleNudgeJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x4F7FD90", Offset = "0x4F7FD90", VA = "0x4F7FD90")]
	private static extern void ScheduleConvertMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x4F7FE20", Offset = "0x4F7FE20", VA = "0x4F7FE20")]
	private static extern void ScheduleCopyMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);
}
