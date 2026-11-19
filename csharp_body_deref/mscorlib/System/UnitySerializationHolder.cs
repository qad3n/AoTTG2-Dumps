// ==================== AoTTG2 cross-reference ====================
// Type: System.UnitySerializationHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000174")]
internal class UnitySerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x10")]
	private Type[] m_instantiation;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x18")]
	private int[] m_elementTypes;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x20")]
	private int m_genericParameterPosition;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x28")]
	private Type m_declaringType;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x30")]
	private MethodBase m_declaringMethod;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x38")]
	private string m_data;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x40")]
	private string m_assemblyName;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x48")]
	private int m_unityType;

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x5506FF0", Offset = "0x5505FF0", VA = "0x5506FF0")]
	internal static System.RuntimeType AddElementTypes(SerializationInfo info, System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x5507390", Offset = "0x5506390", VA = "0x5507390")]
	internal Type MakeElementTypes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x5507490", Offset = "0x5506490", VA = "0x5507490")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x55075A0", Offset = "0x55065A0", VA = "0x55075A0")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x55078E0", Offset = "0x55068E0", VA = "0x55078E0")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType, string data, System.Reflection.RuntimeAssembly assembly)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x5507A30", Offset = "0x5506A30", VA = "0x5507A30")]
	internal UnitySerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x5507EA0", Offset = "0x5506EA0", VA = "0x5507EA0")]
	private void ThrowInsufficientInformation(string field)
	{
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x5507FA0", Offset = "0x5506FA0", VA = "0x5507FA0", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x5507FF0", Offset = "0x5506FF0", VA = "0x5507FF0", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
