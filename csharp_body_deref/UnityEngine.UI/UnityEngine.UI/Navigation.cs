// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Navigation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200005A")]
public struct Navigation : IEquatable<Navigation>
{
	[Token(Token = "0x200005B")]
	[Flags]
	public enum Mode
	{
		[Token(Token = "0x40001AC")]
		None = 0,
		[Token(Token = "0x40001AD")]
		Horizontal = 1,
		[Token(Token = "0x40001AE")]
		Vertical = 2,
		[Token(Token = "0x40001AF")]
		Automatic = Horizontal | Vertical,
		[Token(Token = "0x40001B0")]
		Explicit = 4
	}

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Mode m_Mode;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x4")]
	[Tooltip("Enables navigation to wrap around from last to first or first to last element. Does not work for automatic grid navigation")]
	[SerializeField]
	private bool m_WrapAround;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Selectable m_SelectOnUp;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private Selectable m_SelectOnDown;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Selectable m_SelectOnLeft;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Selectable m_SelectOnRight;

	[Token(Token = "0x170000DD")]
	public Mode mode
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool wrapAround
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x180D610", Offset = "0x180BC10", VA = "0x18180D610")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x2F73AD0", Offset = "0x2F720D0", VA = "0x182F73AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public Selectable selectOnUp
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public Selectable selectOnDown
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public Selectable selectOnLeft
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public Selectable selectOnRight
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public static Navigation defaultNavigation
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x32DAAC0", Offset = "0x32D90C0", VA = "0x1832DAAC0")]
		get
		{
			return default(Navigation);
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x32DA9B0", Offset = "0x32D8FB0", VA = "0x1832DA9B0", Slot = "4")]
	public bool Equals(Navigation other)
	{
		return default(bool);
	}
}
