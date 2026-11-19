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
		[Address(RVA = "0x6CE8920", Offset = "0x6CE7920", VA = "0x6CE8920")]
		get
		{
			return default(Mode);
		}
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x6CE8930", Offset = "0x6CE7930", VA = "0x6CE8930")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool wrapAround
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x6CE8940", Offset = "0x6CE7940", VA = "0x6CE8940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x6CE8950", Offset = "0x6CE7950", VA = "0x6CE8950")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	public Selectable selectOnUp
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x6CE8960", Offset = "0x6CE7960", VA = "0x6CE8960")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x6CE8970", Offset = "0x6CE7970", VA = "0x6CE8970")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public Selectable selectOnDown
	{
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x6CE8980", Offset = "0x6CE7980", VA = "0x6CE8980")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x6CE8990", Offset = "0x6CE7990", VA = "0x6CE8990")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public Selectable selectOnLeft
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x6CE89A0", Offset = "0x6CE79A0", VA = "0x6CE89A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x6CE89B0", Offset = "0x6CE79B0", VA = "0x6CE89B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public Selectable selectOnRight
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x6CE89C0", Offset = "0x6CE79C0", VA = "0x6CE89C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x6CE89D0", Offset = "0x6CE79D0", VA = "0x6CE89D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public static Navigation defaultNavigation
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x6CE89E0", Offset = "0x6CE79E0", VA = "0x6CE89E0")]
		get
		{
			return default(Navigation);
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x6CE8A00", Offset = "0x6CE7A00", VA = "0x6CE8A00", Slot = "4")]
	public bool Equals(Navigation other)
	{
		return default(bool);
	}
}
