// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.NameValueCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000338")]
public class NameValueCollection : NameObjectCollectionBase
{
	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x50")]
	private string[] _all;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x58")]
	private string[] _allKeys;

	[Token(Token = "0x170004A4")]
	public string this[string name]
	{
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x48E39C0", Offset = "0x48E39C0", VA = "0x48E39C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155E")]
		[Address(RVA = "0x48E39E0", Offset = "0x48E39E0", VA = "0x48E39E0")]
		set
		{
		}
	}

	[Token(Token = "0x170004A5")]
	public virtual string[] AllKeys
	{
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x48E3CA0", Offset = "0x48E3CA0", VA = "0x48E3CA0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x48E2B80", Offset = "0x48E2B80", VA = "0x48E2B80")]
	public NameValueCollection()
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x48E2C90", Offset = "0x48E2C90", VA = "0x48E2C90")]
	public NameValueCollection(int capacity, IEqualityComparer equalityComparer)
	{
	}

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x48E2D10", Offset = "0x48E2D10", VA = "0x48E2D10")]
	protected NameValueCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x48E2DB0", Offset = "0x48E2DB0", VA = "0x48E2DB0")]
	protected void InvalidateCachedArrays()
	{
	}

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x48E2DE0", Offset = "0x48E2DE0", VA = "0x48E2DE0")]
	private static string GetAsOneString(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x48E2F60", Offset = "0x48E2F60", VA = "0x48E2F60")]
	private static string[] GetAsStringArray(ArrayList list)
	{
		return null;
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x48E2FE0", Offset = "0x48E2FE0", VA = "0x48E2FE0", Slot = "15")]
	public virtual void Add(string name, string value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x48E3300", Offset = "0x48E3300", VA = "0x48E3300", Slot = "16")]
	public virtual string Get(string name)
	{
		return null;
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x48E3390", Offset = "0x48E3390", VA = "0x48E3390", Slot = "17")]
	public virtual string[] GetValues(string name)
	{
		return null;
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x48E34A0", Offset = "0x48E34A0", VA = "0x48E34A0", Slot = "18")]
	public virtual void Set(string name, string value)
	{
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x48E3650", Offset = "0x48E3650", VA = "0x48E3650", Slot = "19")]
	public virtual void Remove(string name)
	{
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x48E3A00", Offset = "0x48E3A00", VA = "0x48E3A00", Slot = "20")]
	public virtual string Get(int index)
	{
		return null;
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x48E3B80", Offset = "0x48E3B80", VA = "0x48E3B80", Slot = "21")]
	public virtual string GetKey(int index)
	{
		return null;
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x48E3E80", Offset = "0x48E3E80", VA = "0x48E3E80")]
	internal NameValueCollection(DBNull dummy)
	{
	}
}
