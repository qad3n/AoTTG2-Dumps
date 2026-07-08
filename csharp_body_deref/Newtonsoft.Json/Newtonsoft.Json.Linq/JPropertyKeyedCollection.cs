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
		[Address(RVA = "0x3B26490", Offset = "0x3B26490", VA = "0x3B26490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000208")]
	public ICollection<string> Keys
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x3B20840", Offset = "0x3B20840", VA = "0x3B20840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	public ICollection<JToken> Values
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x3B26550", Offset = "0x3B26550", VA = "0x3B26550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x3B1DFD0", Offset = "0x3B1DFD0", VA = "0x3B1DFD0")]
	public JPropertyKeyedCollection()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x3B258D0", Offset = "0x3B258D0", VA = "0x3B258D0")]
	private void AddKey(string key, JToken item)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x3B259E0", Offset = "0x3B259E0", VA = "0x3B259E0")]
	protected void ChangeItemKey(JToken item, string newKey)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x3B25DA0", Offset = "0x3B25DA0", VA = "0x3B25DA0", Slot = "35")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x3B20750", Offset = "0x3B20750", VA = "0x3B20750")]
	public bool Contains(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x3B25C20", Offset = "0x3B25C20", VA = "0x3B25C20")]
	private bool ContainsItem(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x3B25930", Offset = "0x3B25930", VA = "0x3B25930")]
	private void EnsureDictionary()
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x3B25CE0", Offset = "0x3B25CE0", VA = "0x3B25CE0")]
	private string GetKeyForItem(JToken item)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x3B25E00", Offset = "0x3B25E00", VA = "0x3B25E00", Slot = "36")]
	protected override void InsertItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x3B25F10", Offset = "0x3B25F10", VA = "0x3B25F10")]
	public bool Remove(string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x3B25FE0", Offset = "0x3B25FE0", VA = "0x3B25FE0", Slot = "37")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x3B25D50", Offset = "0x3B25D50", VA = "0x3B25D50")]
	private void RemoveKey(string key)
	{
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x3B26150", Offset = "0x3B26150", VA = "0x3B26150", Slot = "38")]
	protected override void SetItem(int index, JToken item)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x3B1EBD0", Offset = "0x3B1EBD0", VA = "0x3B1EBD0")]
	public bool TryGetValue(string key, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x3B1E890", Offset = "0x3B1E890", VA = "0x3B1E890")]
	public int IndexOfReference(JToken t)
	{
		return default(int);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x3B1E3D0", Offset = "0x3B1E3D0", VA = "0x3B1E3D0")]
	public bool Compare(JPropertyKeyedCollection other)
	{
		return default(bool);
	}
}
