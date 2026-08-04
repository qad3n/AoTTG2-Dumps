// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000528")]
internal struct LayoutValue
{
	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x0")]
	private float value;

	[Token(Token = "0x4001166")]
	[FieldOffset(Offset = "0x4")]
	private LayoutUnit unit;

	[Token(Token = "0x170007F9")]
	public LayoutUnit Unit
	{
		[Token(Token = "0x6001F5D")]
		[Address(RVA = "0x4FBC410", Offset = "0x4FBC410", VA = "0x4FBC410")]
		get
		{
			return default(LayoutUnit);
		}
	}

	[Token(Token = "0x170007FA")]
	public float Value
	{
		[Token(Token = "0x6001F5E")]
		[Address(RVA = "0x4FBC420", Offset = "0x4FBC420", VA = "0x4FBC420")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x4FB9A50", Offset = "0x4FB9A50", VA = "0x4FB9A50")]
	public static LayoutValue Point(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x4FBC430", Offset = "0x4FBC430", VA = "0x4FBC430")]
	public bool Equals(LayoutValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x4FBC480", Offset = "0x4FBC480", VA = "0x4FBC480", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x4FBC520", Offset = "0x4FBC520", VA = "0x4FBC520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x4FB9B80", Offset = "0x4FB9B80", VA = "0x4FB9B80")]
	public static LayoutValue Undefined()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x4FB9A40", Offset = "0x4FB9A40", VA = "0x4FB9A40")]
	public static LayoutValue Auto()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x4FB9B50", Offset = "0x4FB9B50", VA = "0x4FB9B50")]
	public static LayoutValue Percent(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x4FBC550", Offset = "0x4FBC550", VA = "0x4FBC550")]
	public static implicit operator LayoutValue(float value)
	{
		return default(LayoutValue);
	}
}
