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
		[Address(RVA = "0x3E1BDE0", Offset = "0x3E1BDE0", VA = "0x3E1BDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x3E16190", Offset = "0x3E16190", VA = "0x3E16190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	public ICollection<JToken> Values
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x3E1BEA0", Offset = "0x3E1BEA0", VA = "0x3E1BEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x3E13920", Offset = "0x3E13920", VA = "0x3E13920")]
	public JPropertyKeyedCollection()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x3E1B220", Offset = "0x3E1B220", VA = "0x3E1B220")]
	private void AddKey(string key, JToken item)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x3E1B330", Offset = "0x3E1B330", VA = "0x3E1B330")]
	protected void ChangeItemKey(JToken item, string newKey)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x3E1B6F0", Offset = "0x3E1B6F0", VA = "0x3E1B6F0", Slot = "35")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x3E160A0", Offset = "0x3E160A0", VA = "0x3E160A0")]
	public bool Contains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x3E1B570", Offset = "0x3E1B570", VA = "0x3E1B570")]
	private bool ContainsItem(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x3E1B280", Offset = "0x3E1B280", VA = "0x3E1B280")]
	private void EnsureDictionary()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x3E1B630", Offset = "0x3E1B630", VA = "0x3E1B630")]
	private string GetKeyForItem(JToken item)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x3E1B750", Offset = "0x3E1B750", VA = "0x3E1B750", Slot = "36")]
	protected override void InsertItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x3E1B860", Offset = "0x3E1B860", VA = "0x3E1B860")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x3E1B930", Offset = "0x3E1B930", VA = "0x3E1B930", Slot = "37")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x3E1B6A0", Offset = "0x3E1B6A0", VA = "0x3E1B6A0")]
	private void RemoveKey(string key)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x3E1BAA0", Offset = "0x3E1BAA0", VA = "0x3E1BAA0", Slot = "38")]
	protected override void SetItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x3E14520", Offset = "0x3E14520", VA = "0x3E14520")]
	public bool TryGetValue(string key, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x3E141E0", Offset = "0x3E141E0", VA = "0x3E141E0")]
	public int IndexOfReference(JToken t)
	{
		return default(int);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x3E13D20", Offset = "0x3E13D20", VA = "0x3E13D20")]
	public bool Compare(JPropertyKeyedCollection other)
	{
		return default(bool);
	}
}
