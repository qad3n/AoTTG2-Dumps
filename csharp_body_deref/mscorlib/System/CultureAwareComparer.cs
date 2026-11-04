// ==================== AoTTG2 cross-reference ====================
// Type: System.CultureAwareComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000136")]
public sealed class CultureAwareComparer : StringComparer, ISerializable
{
	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x10")]
	private readonly CompareInfo _compareInfo;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x18")]
	private CompareOptions _options;

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x1B43B80", Offset = "0x1B42180", VA = "0x181B43B80")]
	internal CultureAwareComparer(CultureInfo culture, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x1B43ED0", Offset = "0x1B424D0", VA = "0x181B43ED0")]
	internal CultureAwareComparer(CompareInfo compareInfo, CompareOptions options)
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x1B43C80", Offset = "0x1B42280", VA = "0x181B43C80")]
	private CultureAwareComparer(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x1B438A0", Offset = "0x1B41EA0", VA = "0x181B438A0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x1B43900", Offset = "0x1B41F00", VA = "0x181B43900", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x1B43A30", Offset = "0x1B42030", VA = "0x181B43A30", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x1B43960", Offset = "0x1B41F60", VA = "0x181B43960", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x1B439F0", Offset = "0x1B41FF0", VA = "0x181B439F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x1B43AB0", Offset = "0x1B420B0", VA = "0x181B43AB0", Slot = "13")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
