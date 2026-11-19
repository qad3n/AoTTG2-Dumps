// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JPropertyKeyedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000179")]
internal class JPropertyKeyedCollection : Collection<JToken>
{
	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly IEqualityComparer<string> Comparer;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<string, JToken>? _dictionary;

	[Token(Token = "0x17000207")]
	public JToken this[string key]
	{
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x560FF80", Offset = "0x560EF80", VA = "0x560FF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x560AAB0", Offset = "0x5609AB0", VA = "0x560AAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	public ICollection<JToken> Values
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x5610040", Offset = "0x560F040", VA = "0x5610040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x5608440", Offset = "0x5607440", VA = "0x5608440")]
	public JPropertyKeyedCollection()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x560F3C0", Offset = "0x560E3C0", VA = "0x560F3C0")]
	private void AddKey(string key, JToken item)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x560F4D0", Offset = "0x560E4D0", VA = "0x560F4D0")]
	protected void ChangeItemKey(JToken item, string newKey)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x560F890", Offset = "0x560E890", VA = "0x560F890", Slot = "35")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x560A9C0", Offset = "0x56099C0", VA = "0x560A9C0")]
	public bool Contains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x560F710", Offset = "0x560E710", VA = "0x560F710")]
	private bool ContainsItem(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x560F420", Offset = "0x560E420", VA = "0x560F420")]
	private void EnsureDictionary()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x560F7D0", Offset = "0x560E7D0", VA = "0x560F7D0")]
	private string GetKeyForItem(JToken item)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x560F8F0", Offset = "0x560E8F0", VA = "0x560F8F0", Slot = "36")]
	protected override void InsertItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x560FA00", Offset = "0x560EA00", VA = "0x560FA00")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x560FAD0", Offset = "0x560EAD0", VA = "0x560FAD0", Slot = "37")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x560F840", Offset = "0x560E840", VA = "0x560F840")]
	private void RemoveKey(string key)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x560FC40", Offset = "0x560EC40", VA = "0x560FC40", Slot = "38")]
	protected override void SetItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x5608FB0", Offset = "0x5607FB0", VA = "0x5608FB0")]
	public bool TryGetValue(string key, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x5608C70", Offset = "0x5607C70", VA = "0x5608C70")]
	public int IndexOfReference(JToken t)
	{
		return default(int);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x5608830", Offset = "0x5607830", VA = "0x5608830")]
	public bool Compare(JPropertyKeyedCollection other)
	{
		return default(bool);
	}
}
