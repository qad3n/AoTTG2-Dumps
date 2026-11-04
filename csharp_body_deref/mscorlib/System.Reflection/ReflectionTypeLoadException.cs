// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ReflectionTypeLoadException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000522")]
public sealed class ReflectionTypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x170004E2")]
	public Type[] Types
	{
		[Token(Token = "0x600252E")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	public Exception[] LoaderExceptions
	{
		[Token(Token = "0x600252F")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E4")]
	public override string Message
	{
		[Token(Token = "0x6002530")]
		[Address(RVA = "0x1A4C6A0", Offset = "0x1A4ACA0", VA = "0x181A4C6A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600252B")]
	[Address(RVA = "0x1A4C630", Offset = "0x1A4AC30", VA = "0x181A4C630")]
	public ReflectionTypeLoadException(Type[] classes, Exception[] exceptions)
	{
	}

	[Token(Token = "0x600252C")]
	[Address(RVA = "0x1A4C500", Offset = "0x1A4AB00", VA = "0x181A4C500")]
	private ReflectionTypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600252D")]
	[Address(RVA = "0x1A4C3E0", Offset = "0x1A4A9E0", VA = "0x181A4C3E0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002531")]
	[Address(RVA = "0x1A4C4F0", Offset = "0x1A4AAF0", VA = "0x181A4C4F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002532")]
	[Address(RVA = "0x1A4C290", Offset = "0x1A4A890", VA = "0x181A4C290")]
	private string CreateString(bool isMessage)
	{
		return null;
	}
}
