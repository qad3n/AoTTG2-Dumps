using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200005C")]
public struct Navigation : IEquatable<Navigation>
{
	[Token(Token = "0x200005D")]
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
		Automatic = 3,
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

	[Token(Token = "0x170000DC")]
	public Mode mode
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4DB0F40", Offset = "0x4DB0F40", VA = "0x4DB0F40")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x4DB0F50", Offset = "0x4DB0F50", VA = "0x4DB0F50")]
		set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public bool wrapAround
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x4DB0F60", Offset = "0x4DB0F60", VA = "0x4DB0F60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x4DB0F70", Offset = "0x4DB0F70", VA = "0x4DB0F70")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public Selectable selectOnUp
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x4DB0F80", Offset = "0x4DB0F80", VA = "0x4DB0F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x4DB0F90", Offset = "0x4DB0F90", VA = "0x4DB0F90")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public Selectable selectOnDown
	{
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x4DB0FA0", Offset = "0x4DB0FA0", VA = "0x4DB0FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x4DB0FB0", Offset = "0x4DB0FB0", VA = "0x4DB0FB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public Selectable selectOnLeft
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x4DB0FC0", Offset = "0x4DB0FC0", VA = "0x4DB0FC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x4DB0FD0", Offset = "0x4DB0FD0", VA = "0x4DB0FD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public Selectable selectOnRight
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x4DB0FE0", Offset = "0x4DB0FE0", VA = "0x4DB0FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x4DB0FF0", Offset = "0x4DB0FF0", VA = "0x4DB0FF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public static Navigation defaultNavigation
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4DB1000", Offset = "0x4DB1000", VA = "0x4DB1000")]
		get
		{
			return default(Navigation);
		}
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4DB1020", Offset = "0x4DB1020", VA = "0x4DB1020", Slot = "4")]
	public bool Equals(Navigation other)
	{
		return default(bool);
	}
}
