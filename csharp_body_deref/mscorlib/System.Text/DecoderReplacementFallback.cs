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
[Token(Token = "0x2000273")]
public sealed class DecoderReplacementFallback : DecoderFallback, ISerializable
{
	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x10")]
	private string _strDefault;

	[Token(Token = "0x1700021D")]
	public string DefaultString
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x3D53610", Offset = "0x3D53610", VA = "0x3D53610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021E")]
	public override int MaxCharCount
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x3D536D0", Offset = "0x3D536D0", VA = "0x3D536D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x3D521C0", Offset = "0x3D521C0", VA = "0x3D521C0")]
	public DecoderReplacementFallback()
	{
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x3D534A0", Offset = "0x3D534A0", VA = "0x3D534A0")]
	internal DecoderReplacementFallback(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x3D535C0", Offset = "0x3D535C0", VA = "0x3D535C0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x3D53300", Offset = "0x3D53300", VA = "0x3D53300")]
	public DecoderReplacementFallback(string replacement)
	{
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x3D53620", Offset = "0x3D53620", VA = "0x3D53620", Slot = "4")]
	public override DecoderFallbackBuffer CreateFallbackBuffer()
	{
		return null;
	}

	[Token(Token = "0x600156F")]
	[Address(RVA = "0x3D536F0", Offset = "0x3D536F0", VA = "0x3D536F0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x3D53760", Offset = "0x3D53760", VA = "0x3D53760", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
