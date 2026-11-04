// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataTablePropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200004E")]
internal sealed class DataTablePropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x170000D1")]
	public DataTable Table
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public override Type ComponentType
	{
		[Token(Token = "0x60004F9")]
		[Address(RVA = "0x2509A40", Offset = "0x2508040", VA = "0x182509A40", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60004FA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D4")]
	public override Type PropertyType
	{
		[Token(Token = "0x60004FB")]
		[Address(RVA = "0x2509A90", Offset = "0x2508090", VA = "0x182509A90", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x25099F0", Offset = "0x2507FF0", VA = "0x1825099F0")]
	internal DataTablePropertyDescriptor(DataTable dataTable)
	{
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x2509840", Offset = "0x2507E40", VA = "0x182509840", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x24ED780", Offset = "0x24EBD80", VA = "0x1824ED780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x25098D0", Offset = "0x2507ED0", VA = "0x1825098D0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
