// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Asset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000013")]
public abstract class TMP_Asset : ScriptableObject
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal string m_Version;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x20")]
	internal int m_InstanceID;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x24")]
	internal int m_HashCode;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	[FormerlySerializedAs("material")]
	internal Material m_Material;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x90")]
	internal int m_MaterialHashCode;

	[Token(Token = "0x17000012")]
	public string version
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x66DC820", Offset = "0x66DB820", VA = "0x66DC820")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x66DC830", Offset = "0x66DB830", VA = "0x66DC830")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public int instanceID
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x66DC840", Offset = "0x66DB840", VA = "0x66DC840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	public int hashCode
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x66DB2D0", Offset = "0x66DA2D0", VA = "0x66DB2D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x66DC860", Offset = "0x66DB860", VA = "0x66DC860")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x66DC870", Offset = "0x66DB870", VA = "0x66DC870")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x66DC8B0", Offset = "0x66DB8B0", VA = "0x66DC8B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Material material
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x66DC900", Offset = "0x66DB900", VA = "0x66DC900")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x66DC910", Offset = "0x66DB910", VA = "0x66DC910")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public int materialHashCode
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x66DB350", Offset = "0x66DA350", VA = "0x66DB350")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x66DC930", Offset = "0x66DB930", VA = "0x66DC930")]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x66DC940", Offset = "0x66DB940", VA = "0x66DC940")]
	protected TMP_Asset()
	{
	}
}
