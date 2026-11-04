// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Asset
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000050")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public int instanceID
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2CDFAB0", Offset = "0x2CDE0B0", VA = "0x182CDFAB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000014")]
	public int hashCode
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2CDFA40", Offset = "0x2CDE040", VA = "0x182CDFA40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2CDFA00", Offset = "0x2CDE000", VA = "0x182CDFA00")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x2CDFBB0", Offset = "0x2CDE1B0", VA = "0x182CDFBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public Material material
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public int materialHashCode
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2CDFAE0", Offset = "0x2CDE0E0", VA = "0x182CDFAE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0xE92690", Offset = "0xE90C90", VA = "0x180E92690")]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected TMP_Asset()
	{
	}
}
