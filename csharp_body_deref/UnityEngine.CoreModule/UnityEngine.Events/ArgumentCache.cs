// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Events.ArgumentCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Events;

[Serializable]
[Token(Token = "0x2000220")]
internal class ArgumentCache : ISerializationCallbackReceiver
{
	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("objectArgument")]
	[SerializeField]
	private Object m_ObjectArgument;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[FormerlySerializedAs("objectArgumentAssemblyTypeName")]
	private string m_ObjectArgumentAssemblyTypeName;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[FormerlySerializedAs("intArgument")]
	private int m_IntArgument;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[FormerlySerializedAs("floatArgument")]
	private float m_FloatArgument;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("stringArgument")]
	private string m_StringArgument;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_BoolArgument;

	[Token(Token = "0x170002C5")]
	public Object unityObjectArgument
	{
		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C6")]
	public string unityObjectArgumentAssemblyTypeName
	{
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public int intArgument
	{
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C8")]
	public float floatArgument
	{
		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x2F2DDD0", Offset = "0x2F2C3D0", VA = "0x182F2DDD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002C9")]
	public string stringArgument
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CA")]
	public bool boolArgument
	{
		[Token(Token = "0x60010FE")]
		[Address(RVA = "0xAD3610", Offset = "0xAD1C10", VA = "0x180AD3610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x2F2DDA0", Offset = "0x2F2C3A0", VA = "0x182F2DDA0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x2F2DDA0", Offset = "0x2F2C3A0", VA = "0x182F2DDA0", Slot = "5")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ArgumentCache()
	{
	}
}
