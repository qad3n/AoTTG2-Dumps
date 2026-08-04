// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerCategory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x200001A")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerCategory
{
	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_CategoryId;

	[Token(Token = "0x17000002")]
	public string Name
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4DABEC0", Offset = "0x4DABEC0", VA = "0x4DABEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public static ProfilerCategory Scripts
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4DAC0A0", Offset = "0x4DAC0A0", VA = "0x4DAC0A0")]
		get
		{
			return default(ProfilerCategory);
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4DABEB0", Offset = "0x4DABEB0", VA = "0x4DABEB0")]
	internal ProfilerCategory(ushort category)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4DAC040", Offset = "0x4DAC040", VA = "0x4DAC040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4DAC0B0", Offset = "0x4DAC0B0", VA = "0x4DAC0B0")]
	public static implicit operator ushort(ProfilerCategory category)
	{
		return default(ushort);
	}
}
