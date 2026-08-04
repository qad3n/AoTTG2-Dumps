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
[Token(Token = "0x2000172")]
internal class UnitySerializationHolder : ISerializable, IObjectReference
{
	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x10")]
	private Type[] m_instantiation;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x18")]
	private int[] m_elementTypes;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x20")]
	private int m_genericParameterPosition;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x28")]
	private Type m_declaringType;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x30")]
	private MethodBase m_declaringMethod;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x38")]
	private string m_data;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x40")]
	private string m_assemblyName;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x48")]
	private int m_unityType;

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x3D03820", Offset = "0x3D03820", VA = "0x3D03820")]
	internal static System.RuntimeType AddElementTypes(SerializationInfo info, System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x3D03BF0", Offset = "0x3D03BF0", VA = "0x3D03BF0")]
	internal Type MakeElementTypes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x3D03D10", Offset = "0x3D03D10", VA = "0x3D03D10")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x3D03E20", Offset = "0x3D03E20", VA = "0x3D03E20")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x3D04160", Offset = "0x3D04160", VA = "0x3D04160")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType, string data, System.Reflection.RuntimeAssembly assembly)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x3D042B0", Offset = "0x3D042B0", VA = "0x3D042B0")]
	internal UnitySerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x3D04720", Offset = "0x3D04720", VA = "0x3D04720")]
	private void ThrowInsufficientInformation(string field)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x3D04820", Offset = "0x3D04820", VA = "0x3D04820", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x3D04870", Offset = "0x3D04870", VA = "0x3D04870", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
