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
		[Address(RVA = "0x4EEEF90", Offset = "0x4EEEF90", VA = "0x4EEEF90")]
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
		[Address(RVA = "0x4EEEFA0", Offset = "0x4EEEFA0", VA = "0x4EEEFA0")]
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
		[Address(RVA = "0x4EEEFB0", Offset = "0x4EEEFB0", VA = "0x4EEEFB0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024A9")]
	[Address(RVA = "0x4EEED10", Offset = "0x4EEED10", VA = "0x4EEED10")]
	public ReflectionTypeLoadException(Type[] classes, Exception[] exceptions)
	{
	}

	[Token(Token = "0x60024AA")]
	[Address(RVA = "0x4EEED60", Offset = "0x4EEED60", VA = "0x4EEED60")]
	private ReflectionTypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024AB")]
	[Address(RVA = "0x4EEEE90", Offset = "0x4EEEE90", VA = "0x4EEEE90", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60024AF")]
	[Address(RVA = "0x4EEF190", Offset = "0x4EEF190", VA = "0x4EEF190", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x4EEEFC0", Offset = "0x4EEEFC0", VA = "0x4EEEFC0")]
	private string CreateString(bool isMessage)
	{
		return null;
	}
}
