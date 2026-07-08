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
		[Address(RVA = "0x4A846A0", Offset = "0x4A846A0", VA = "0x4A846A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public static ProfilerCategory Scripts
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4A84880", Offset = "0x4A84880", VA = "0x4A84880")]
		get
		{
			return default(ProfilerCategory);
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4A84690", Offset = "0x4A84690", VA = "0x4A84690")]
	internal ProfilerCategory(ushort category)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4A84820", Offset = "0x4A84820", VA = "0x4A84820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4A84890", Offset = "0x4A84890", VA = "0x4A84890")]
	public static implicit operator ushort(ProfilerCategory category)
	{
		return default(ushort);
	}
}
