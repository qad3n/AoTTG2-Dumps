// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Point
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x2000006")]
public struct Point : IEquatable<Point>
{
	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x0")]
	private int x;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x4")]
	private int y;

	[Token(Token = "0x17000008")]
	public int X
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	public int Y
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x25B48F0", Offset = "0x25B2EF0", VA = "0x1825B48F0")]
	public static bool operator ==(Point left, Point right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x25B46C0", Offset = "0x25B2CC0", VA = "0x1825B46C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x25B46A0", Offset = "0x25B2CA0", VA = "0x1825B46A0", Slot = "4")]
	public bool Equals(Point other)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x25B4750", Offset = "0x25B2D50", VA = "0x1825B4750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x25B47B0", Offset = "0x25B2DB0", VA = "0x1825B47B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
