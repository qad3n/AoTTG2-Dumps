// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VectorImage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000530")]
[HelpURL("ui-systems/work-with-vector-graphics")]
public sealed class VectorImage : ScriptableObject
{
	[Token(Token = "0x400118E")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule" })]
	[SerializeField]
	internal int version;

	[Token(Token = "0x400118F")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule", "UnityEditor.VectorGraphicsModule" })]
	[SerializeField]
	internal Texture2D atlas;

	[Token(Token = "0x4001190")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule", "UnityEditor.VectorGraphicsModule" })]
	internal VectorImageVertex[] vertices;

	[Token(Token = "0x4001191")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule" })]
	[SerializeField]
	internal ushort[] indices;

	[Token(Token = "0x4001192")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule" })]
	internal GradientSettings[] settings;

	[Token(Token = "0x4001193")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule" })]
	internal Vector2 size;

	[Token(Token = "0x17000A29")]
	public float width
	{
		[Token(Token = "0x60027B0")]
		[Address(RVA = "0x6B69360", Offset = "0x6B68360", VA = "0x6B69360")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A2A")]
	public float height
	{
		[Token(Token = "0x60027B1")]
		[Address(RVA = "0x6B69370", Offset = "0x6B68370", VA = "0x6B69370")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60027B2")]
	[Address(RVA = "0x6B69380", Offset = "0x6B68380", VA = "0x6B69380")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60027B3")]
	[Address(RVA = "0x6B69410", Offset = "0x6B68410", VA = "0x6B69410")]
	public VectorImage()
	{
	}
}
