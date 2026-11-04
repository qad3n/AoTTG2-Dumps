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
[Token(Token = "0x200019C")]
internal class UnitySerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x10")]
	private Type[] m_instantiation;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x18")]
	private int[] m_elementTypes;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x20")]
	private int m_genericParameterPosition;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x28")]
	private Type m_declaringType;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x30")]
	private MethodBase m_declaringMethod;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x38")]
	private string m_data;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x40")]
	private string m_assemblyName;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x48")]
	private int m_unityType;

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x1B91E40", Offset = "0x1B90440", VA = "0x181B91E40")]
	internal static System.RuntimeType AddElementTypes(SerializationInfo info, System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x1B92E30", Offset = "0x1B91430", VA = "0x181B92E30")]
	internal Type MakeElementTypes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x1B92D20", Offset = "0x1B91320", VA = "0x181B92D20")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType)
	{
	}

	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x1B92760", Offset = "0x1B90D60", VA = "0x181B92760")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x1B92BE0", Offset = "0x1B911E0", VA = "0x181B92BE0")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType, string data, System.Reflection.RuntimeAssembly assembly)
	{
	}

	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x1B92FF0", Offset = "0x1B915F0", VA = "0x181B92FF0")]
	internal UnitySerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x1B92F40", Offset = "0x1B91540", VA = "0x181B92F40")]
	private void ThrowInsufficientInformation(string field)
	{
	}

	[Token(Token = "0x6000F3B")]
	[Address(RVA = "0x1B92090", Offset = "0x1B90690", VA = "0x181B92090", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F3C")]
	[Address(RVA = "0x1B920F0", Offset = "0x1B906F0", VA = "0x181B920F0", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
