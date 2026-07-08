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
	[Address(RVA = "0x501DD00", Offset = "0x501DD00", VA = "0x501DD00")]
	internal static System.RuntimeType AddElementTypes(SerializationInfo info, System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x501E0D0", Offset = "0x501E0D0", VA = "0x501E0D0")]
	internal Type MakeElementTypes(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x501E1F0", Offset = "0x501E1F0", VA = "0x501E1F0")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType)
	{
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x501E300", Offset = "0x501E300", VA = "0x501E300")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, System.RuntimeType type)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x501E640", Offset = "0x501E640", VA = "0x501E640")]
	internal static void GetUnitySerializationInfo(SerializationInfo info, int unityType, string data, System.Reflection.RuntimeAssembly assembly)
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x501E790", Offset = "0x501E790", VA = "0x501E790")]
	internal UnitySerializationHolder(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x501EC00", Offset = "0x501EC00", VA = "0x501EC00")]
	private void ThrowInsufficientInformation(string field)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x501ED00", Offset = "0x501ED00", VA = "0x501ED00", Slot = "6")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x501ED50", Offset = "0x501ED50", VA = "0x501ED50", Slot = "7")]
	public virtual object GetRealObject(StreamingContext context)
	{
		return null;
	}
}
