// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextAsset
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A41240", Offset = "0x6A40240", VA = "0x6A41240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x6A41250", Offset = "0x6A40250", VA = "0x6A41250")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public EntityId entityId
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x6A41260", Offset = "0x6A40260", VA = "0x6A41260")]
		get
		{
			return default(EntityId);
		}
	}

	[Token(Token = "0x1700003D")]
	public int instanceID
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x6A412A0", Offset = "0x6A402A0", VA = "0x6A412A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public int hashCode
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x6A412C0", Offset = "0x6A402C0", VA = "0x6A412C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x6A412F0", Offset = "0x6A402F0", VA = "0x6A412F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public Material material
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x6A41300", Offset = "0x6A40300", VA = "0x6A41300")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x6A41310", Offset = "0x6A40310", VA = "0x6A41310")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int materialHashCode
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x6A41320", Offset = "0x6A40320", VA = "0x6A41320")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x6A413B0", Offset = "0x6A403B0", VA = "0x6A413B0")]
		set
		{
		}
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x6A413C0", Offset = "0x6A403C0", VA = "0x6A413C0", Slot = "4")]
	internal virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x6A41140", Offset = "0x6A40140", VA = "0x6A41140")]
	protected TextAsset()
	{
	}
}
