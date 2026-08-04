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
		[Address(RVA = "0x50D8890", Offset = "0x50D8890", VA = "0x50D8890")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x50D88A0", Offset = "0x50D88A0", VA = "0x50D88A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DD")]
	public bool wrapAround
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x50D88B0", Offset = "0x50D88B0", VA = "0x50D88B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x50D88C0", Offset = "0x50D88C0", VA = "0x50D88C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public Selectable selectOnUp
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x50D88D0", Offset = "0x50D88D0", VA = "0x50D88D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x50D88E0", Offset = "0x50D88E0", VA = "0x50D88E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public Selectable selectOnDown
	{
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x50D88F0", Offset = "0x50D88F0", VA = "0x50D88F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x50D8900", Offset = "0x50D8900", VA = "0x50D8900")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public Selectable selectOnLeft
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x50D8910", Offset = "0x50D8910", VA = "0x50D8910")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x50D8920", Offset = "0x50D8920", VA = "0x50D8920")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public Selectable selectOnRight
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x50D8930", Offset = "0x50D8930", VA = "0x50D8930")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x50D8940", Offset = "0x50D8940", VA = "0x50D8940")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public static Navigation defaultNavigation
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x50D8950", Offset = "0x50D8950", VA = "0x50D8950")]
		get
		{
			return default(Navigation);
		}
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x50D8970", Offset = "0x50D8970", VA = "0x50D8970", Slot = "4")]
	public bool Equals(Navigation other)
	{
		return default(bool);
	}
}
