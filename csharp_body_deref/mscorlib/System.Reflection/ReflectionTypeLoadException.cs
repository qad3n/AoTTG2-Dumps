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
[Token(Token = "0x20004F2")]
public sealed class ReflectionTypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x170004DF")]
	public Type[] Types
	{
		[Token(Token = "0x60024AC")]
		[Address(RVA = "0x3BD4AB0", Offset = "0x3BD4AB0", VA = "0x3BD4AB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E0")]
	public Exception[] LoaderExceptions
	{
		[Token(Token = "0x60024AD")]
		[Address(RVA = "0x3BD4AC0", Offset = "0x3BD4AC0", VA = "0x3BD4AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	public override string Message
	{
		[Token(Token = "0x60024AE")]
		[Address(RVA = "0x3BD4AD0", Offset = "0x3BD4AD0", VA = "0x3BD4AD0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024A9")]
	[Address(RVA = "0x3BD4830", Offset = "0x3BD4830", VA = "0x3BD4830")]
	public ReflectionTypeLoadException(Type[] classes, Exception[] exceptions)
	{
	}

	[Token(Token = "0x60024AA")]
	[Address(RVA = "0x3BD4880", Offset = "0x3BD4880", VA = "0x3BD4880")]
	private ReflectionTypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024AB")]
	[Address(RVA = "0x3BD49B0", Offset = "0x3BD49B0", VA = "0x3BD49B0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024AF")]
	[Address(RVA = "0x3BD4CB0", Offset = "0x3BD4CB0", VA = "0x3BD4CB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x3BD4AE0", Offset = "0x3BD4AE0", VA = "0x3BD4AE0")]
	private string CreateString(bool isMessage)
	{
		return null;
	}
}
