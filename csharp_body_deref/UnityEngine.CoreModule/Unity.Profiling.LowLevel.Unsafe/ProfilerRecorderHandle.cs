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
[Token(Token = "0x2000035")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerRecorderHandle
{
	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly ulong handle;

	[Token(Token = "0x17000015")]
	public bool Valid
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x2ECE260", Offset = "0x2ECC860", VA = "0x182ECE260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal ProfilerRecorderHandle(ulong handle)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2ECE180", Offset = "0x2ECC780", VA = "0x182ECE180")]
	public static ProfilerRecorderDescription GetDescription(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2ECE080", Offset = "0x2ECC680", VA = "0x182ECE080")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	internal unsafe static ProfilerRecorderHandle GetByName__Unmanaged(ProfilerCategory category, byte* name, int nameLen)
	{
		return default(ProfilerRecorderHandle);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2ECE130", Offset = "0x2ECC730", VA = "0x182ECE130")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static ProfilerRecorderDescription GetDescriptionInternal(ProfilerRecorderHandle handle)
	{
		return default(ProfilerRecorderDescription);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2ECE030", Offset = "0x2ECC630", VA = "0x182ECE030")]
	private unsafe static extern void GetByName__Unmanaged_Injected([In] ref ProfilerCategory category, byte* name, int nameLen, out ProfilerRecorderHandle ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2ECE0E0", Offset = "0x2ECC6E0", VA = "0x182ECE0E0")]
	private static extern void GetDescriptionInternal_Injected([In] ref ProfilerRecorderHandle handle, out ProfilerRecorderDescription ret);
}
