// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.DecoderReplacementFallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text;

[Serializable]
[Token(Token = "0x20002A3")]
public sealed class DecoderReplacementFallback : DecoderFallback, ISerializable
{
	[Token(Token = "0x4000B84")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x1700021F")]
	public string DefaultString
	{
		[Token(Token = "0x60015D8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000220")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015DA")]
		[Address(RVA = "0x1976F50", Offset = "0x1975550", VA = "0x181976F50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x1976CC0", Offset = "0x19752C0", VA = "0x181976CC0")]
	public DecoderReplacementFallback()
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x1976D00", Offset = "0x1975300", VA = "0x181976D00")]
	internal DecoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x1976C60", Offset = "0x1975260", VA = "0x181976C60", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x1976DC0", Offset = "0x19753C0", VA = "0x181976DC0")]
	public DecoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x1976B70", Offset = "0x1975170", VA = "0x181976B70", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x1976BF0", Offset = "0x19751F0", VA = "0x181976BF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DC")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
