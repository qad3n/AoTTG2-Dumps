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
	[Address(RVA = "0x4C58380", Offset = "0x4C58380", VA = "0x4C58380")]
	internal static JobHandle ScheduleNudgeJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001C5F")]
	[Address(RVA = "0x4C58410", Offset = "0x4C58410", VA = "0x4C58410")]
	internal static JobHandle ScheduleConvertMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6001C60")]
	[Address(RVA = "0x4C584A0", Offset = "0x4C584A0", VA = "0x4C584A0")]
	internal static JobHandle ScheduleCopyMeshJobs(IntPtr buffer, int jobCount)
	{
		return default(JobHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x4C583D0", Offset = "0x4C583D0", VA = "0x4C583D0")]
	private static extern void ScheduleNudgeJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x4C58460", Offset = "0x4C58460", VA = "0x4C58460")]
	private static extern void ScheduleConvertMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x4C584F0", Offset = "0x4C584F0", VA = "0x4C584F0")]
	private static extern void ScheduleCopyMeshJobs_Injected(IntPtr buffer, int jobCount, out JobHandle ret);
}
