// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeLoadException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D032C0", Offset = "0x3D032C0", VA = "0x3D032C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x3D03250", Offset = "0x3D03250", VA = "0x3D03250")]
	public TypeLoadException()
	{
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x3D032A0", Offset = "0x3D032A0", VA = "0x3D032A0")]
	public TypeLoadException(string message)
	{
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x3D032D0", Offset = "0x3D032D0", VA = "0x3D032D0")]
	private void SetMessageField()
	{
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x3D03400", Offset = "0x3D03400", VA = "0x3D03400")]
	private TypeLoadException(string className, string assemblyName)
	{
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x3D03490", Offset = "0x3D03490", VA = "0x3D03490")]
	private TypeLoadException(string className, string assemblyName, string messageArg, int resourceId)
	{
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x3D03520", Offset = "0x3D03520", VA = "0x3D03520")]
	protected TypeLoadException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x3D03680", Offset = "0x3D03680", VA = "0x3D03680", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
