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

[Token(Token = "0x2000567")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRendererJobProcessor.h")]
internal static class JobProcessor
{
	[Token(Token = "0x60028A8")]
	[Address(RVA = "0x6B76FB0", Offset = "0x6B75FB0", VA = "0x6B76FB0")]
	internal static JobHandle ScheduleNudgeJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60028A9")]
	[Address(RVA = "0x6B77040", Offset = "0x6B76040", VA = "0x6B77040")]
	internal static JobHandle ScheduleConvertMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60028AA")]
	[Address(RVA = "0x6B770D0", Offset = "0x6B760D0", VA = "0x6B770D0")]
	internal static JobHandle ScheduleCopyMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028AB")]
	[Address(RVA = "0x6B77000", Offset = "0x6B76000", VA = "0x6B77000")]
	private static extern void ScheduleNudgeJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x6B77090", Offset = "0x6B76090", VA = "0x6B77090")]
	private static extern void ScheduleConvertMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028AD")]
	[Address(RVA = "0x6B77120", Offset = "0x6B76120", VA = "0x6B77120")]
	private static extern void ScheduleCopyMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);
}
