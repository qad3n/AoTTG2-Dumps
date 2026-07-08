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
		[Address(RVA = "0x4A85420", Offset = "0x4A85420", VA = "0x4A85420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4A85410", Offset = "0x4A85410", VA = "0x4A85410")]
	internal ProfilerRecorderHandle(ulong handle)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4A85430", Offset = "0x4A85430", VA = "0x4A85430")]
	public static ProfilerRecorderDescription GetDescription(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4A85590", Offset = "0x4A85590", VA = "0x4A85590")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal unsafe static ProfilerRecorderHandle GetByName__Unmanaged(ProfilerCategory category, byte* name, int nameLen)
	{
		return default(ProfilerRecorderHandle);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4A85520", Offset = "0x4A85520", VA = "0x4A85520")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static ProfilerRecorderDescription GetDescriptionInternal(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4A855F0", Offset = "0x4A855F0", VA = "0x4A855F0")]
	private unsafe static extern void GetByName__Unmanaged_Injected([In] ref ProfilerCategory category, byte* name, int nameLen, out ProfilerRecorderHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4A85640", Offset = "0x4A85640", VA = "0x4A85640")]
	private static extern void GetDescriptionInternal_Injected([In] ref ProfilerRecorderHandle handle, out ProfilerRecorderDescription ret);
}
