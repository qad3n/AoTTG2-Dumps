// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextAsset
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200003A")]
[ExcludeFromObjectFactory]
public abstract class TextAsset : ScriptableObject
{
	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal string m_Version;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x20")]
	internal EntityId m_EntityId;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x24")]
	internal int m_InstanceID;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x28")]
	internal int m_HashCode;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("material")]
	[SerializeField]
	internal Material m_Material;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x38")]
	internal int m_MaterialHashCode;

	[Token(Token = "0x1700003B")]
	public string version
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public EntityId entityId
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x30455E0", Offset = "0x3043BE0", VA = "0x1830455E0")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700003D")]
	public int instanceID
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x3045670", Offset = "0x3043C70", VA = "0x183045670")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public int hashCode
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x3045630", Offset = "0x3043C30", VA = "0x183045630")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public Material material
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int materialHashCode
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x30456A0", Offset = "0x3043CA0", VA = "0x1830456A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	internal virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected TextAsset()
	{
	}
}
