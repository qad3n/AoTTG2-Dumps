// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.Unsafe.ProfilerRecorderHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Profiling.LowLevel.Unsafe;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200002A")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerRecorderHandle
{
	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly ulong handle;

	[Token(Token = "0x1700000E")]
	public bool Valid
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x4DACC40", Offset = "0x4DACC40", VA = "0x4DACC40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4DACC30", Offset = "0x4DACC30", VA = "0x4DACC30")]
	internal ProfilerRecorderHandle(ulong handle)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4DACC50", Offset = "0x4DACC50", VA = "0x4DACC50")]
	public static ProfilerRecorderDescription GetDescription(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4DACDB0", Offset = "0x4DACDB0", VA = "0x4DACDB0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal unsafe static ProfilerRecorderHandle GetByName__Unmanaged(ProfilerCategory category, byte* name, int nameLen)
	{
		return default(ProfilerRecorderHandle);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4DACD40", Offset = "0x4DACD40", VA = "0x4DACD40")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static ProfilerRecorderDescription GetDescriptionInternal(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4DACE10", Offset = "0x4DACE10", VA = "0x4DACE10")]
	private unsafe static extern void GetByName__Unmanaged_Injected([In] ref ProfilerCategory category, byte* name, int nameLen, out ProfilerRecorderHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4DACE60", Offset = "0x4DACE60", VA = "0x4DACE60")]
	private static extern void GetDescriptionInternal_Injected([In] ref ProfilerRecorderHandle handle, out ProfilerRecorderDescription ret);
}
