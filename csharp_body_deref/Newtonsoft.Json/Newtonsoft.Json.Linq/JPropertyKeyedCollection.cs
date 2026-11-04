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
		[Address(RVA = "0x1C7A7E0", Offset = "0x1C78DE0", VA = "0x181C7A7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x1C7A8D0", Offset = "0x1C78ED0", VA = "0x181C7A8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	public ICollection<JToken> Values
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x1C7A920", Offset = "0x1C78F20", VA = "0x181C7A920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x1C7A760", Offset = "0x1C78D60", VA = "0x181C7A760")]
	public JPropertyKeyedCollection()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x1C79670", Offset = "0x1C77C70", VA = "0x181C79670")]
	private void AddKey(string key, JToken item)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x1C796E0", Offset = "0x1C77CE0", VA = "0x181C796E0")]
	protected void ChangeItemKey(JToken item, string newKey)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x1C79920", Offset = "0x1C77F20", VA = "0x181C79920", Slot = "35")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x1C79DB0", Offset = "0x1C783B0", VA = "0x181C79DB0")]
	public bool Contains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x1C79CE0", Offset = "0x1C782E0", VA = "0x181C79CE0")]
	private bool ContainsItem(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x1C79E60", Offset = "0x1C78460", VA = "0x181C79E60")]
	private void EnsureDictionary()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x1C79F20", Offset = "0x1C78520", VA = "0x181C79F20")]
	private string GetKeyForItem(JToken item)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x1C7A030", Offset = "0x1C78630", VA = "0x181C7A030", Slot = "36")]
	protected override void InsertItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x1C7A2B0", Offset = "0x1C788B0", VA = "0x181C7A2B0")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x1C7A140", Offset = "0x1C78740", VA = "0x181C7A140", Slot = "37")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x1C7A260", Offset = "0x1C78860", VA = "0x181C7A260")]
	private void RemoveKey(string key)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x1C7A390", Offset = "0x1C78990", VA = "0x181C7A390", Slot = "38")]
	protected override void SetItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x1C7A620", Offset = "0x1C78C20", VA = "0x181C7A620")]
	public bool TryGetValue(string key, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x1C79F90", Offset = "0x1C78590", VA = "0x181C79F90")]
	public int IndexOfReference(JToken t)
	{
		return default(int);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x1C79980", Offset = "0x1C77F80", VA = "0x181C79980")]
	public bool Compare(JPropertyKeyedCollection other)
	{
		return default(bool);
	}
}
