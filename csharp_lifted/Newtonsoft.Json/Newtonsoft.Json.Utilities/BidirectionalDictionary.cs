// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.BidirectionalDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x2000098")]
internal class BidirectionalDictionary<TFirst, TSecond> where TFirst : notnull where TSecond : notnull
{
	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary<TFirst, TSecond> _firstToSecond;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x0")]
	private readonly IDictionary<TSecond, TFirst> _secondToFirst;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _duplicateFirstErrorMessage;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _duplicateSecondErrorMessage;

	[Token(Token = "0x60004F9")]
	public BidirectionalDictionary()
	{
	}

	[Token(Token = "0x60004FA")]
	public BidirectionalDictionary(IEqualityComparer<TFirst> firstEqualityComparer, IEqualityComparer<TSecond> secondEqualityComparer)
	{
	}

	[Token(Token = "0x60004FB")]
	public BidirectionalDictionary(IEqualityComparer<TFirst> firstEqualityComparer, IEqualityComparer<TSecond> secondEqualityComparer, string duplicateFirstErrorMessage, string duplicateSecondErrorMessage)
	{
	}

	[Token(Token = "0x60004FC")]
	public void Set(TFirst first, TSecond second)
	{
	}

	[Token(Token = "0x60004FD")]
	public bool TryGetByFirst(TFirst first, [NotNullWhen(true)] out TSecond? second)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	public bool TryGetBySecond(TSecond second, [NotNullWhen(true)] out TFirst? first)
	{
		return default(bool);
	}
}
