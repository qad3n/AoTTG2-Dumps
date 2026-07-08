using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000171")]
[ComVisible(true)]
public class TypeLoadException : SystemException, ISerializable
{
	[Token(Token = "0x4000601")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string ClassName;

	[Token(Token = "0x4000602")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string AssemblyName;

	[Token(Token = "0x4000603")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string MessageArg;

	[Token(Token = "0x4000604")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal int ResourceId;

	[Token(Token = "0x17000151")]
	public override string Message
	{
		[Token(Token = "0x6000EE0")]
		[Address(RVA = "0x501D7A0", Offset = "0x501D7A0", VA = "0x501D7A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x501D730", Offset = "0x501D730", VA = "0x501D730")]
	public TypeLoadException()
	{
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x501D780", Offset = "0x501D780", VA = "0x501D780")]
	public TypeLoadException(string message)
	{
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x501D7B0", Offset = "0x501D7B0", VA = "0x501D7B0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x501D8E0", Offset = "0x501D8E0", VA = "0x501D8E0")]
	private TypeLoadException(string className, string assemblyName)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x501D970", Offset = "0x501D970", VA = "0x501D970")]
	private TypeLoadException(string className, string assemblyName, string messageArg, int resourceId)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x501DA00", Offset = "0x501DA00", VA = "0x501DA00")]
	protected TypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x501DB60", Offset = "0x501DB60", VA = "0x501DB60", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
