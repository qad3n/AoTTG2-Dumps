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

namespace TMPro;

[Serializable]
[Token(Token = "0x2000022")]
public abstract class TMP_Asset : ScriptableObject
{
	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x18")]
	private int m_InstanceID;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x1C")]
	public int hashCode;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x20")]
	public Material material;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x28")]
	public int materialHashCode;

	[Token(Token = "0x17000023")]
	public int instanceID
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x4C44AB0", Offset = "0x4C44AB0", VA = "0x4C44AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4C44AD0", Offset = "0x4C44AD0", VA = "0x4C44AD0")]
	protected TMP_Asset()
	{
	}
}
