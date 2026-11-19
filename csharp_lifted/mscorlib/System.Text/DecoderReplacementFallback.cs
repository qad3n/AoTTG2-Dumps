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
[Token(Token = "0x200027B")]
public sealed class DecoderReplacementFallback : DecoderFallback, ISerializable
{
	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x1700021E")]
	public string DefaultString
	{
		[Token(Token = "0x60015AF")]
		[Address(RVA = "0x5554410", Offset = "0x5553410", VA = "0x5554410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	public override int MaxCharCount
	{
		[Token(Token = "0x60015B1")]
		[Address(RVA = "0x55544D0", Offset = "0x55534D0", VA = "0x55544D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x5553020", Offset = "0x5552020", VA = "0x5553020")]
	public DecoderReplacementFallback()
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x55542A0", Offset = "0x55532A0", VA = "0x55542A0")]
	internal DecoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x55543C0", Offset = "0x55533C0", VA = "0x55543C0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x5554110", Offset = "0x5553110", VA = "0x5554110")]
	public DecoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x5554420", Offset = "0x5553420", VA = "0x5554420", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x55544F0", Offset = "0x55534F0", VA = "0x55544F0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x5554550", Offset = "0x5553550", VA = "0x5554550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
