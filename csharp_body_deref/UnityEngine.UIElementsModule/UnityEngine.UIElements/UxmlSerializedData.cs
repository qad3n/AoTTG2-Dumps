// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlSerializedData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000514")]
public abstract class UxmlSerializedData
{
	[Token(Token = "0x2000515")]
	[Flags]
	public enum UxmlAttributeFlags : byte
	{
		[Token(Token = "0x4001114")]
		Ignore = 0,
		[Token(Token = "0x4001115")]
		OverriddenInUxml = 1,
		[Token(Token = "0x4001116")]
		DefaultValue = 2
	}

	[Token(Token = "0x400110F")]
	internal const string AttributeFlagSuffix = "_UxmlAttributeFlags";

	[Token(Token = "0x4001110")]
	private const UxmlAttributeFlags k_DefaultFlags = UxmlAttributeFlags.OverriddenInUxml;

	[Token(Token = "0x4001111")]
	[FieldOffset(Offset = "0x10")]
	[UxmlIgnore]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[HideInInspector]
	internal int uxmlAssetId;

	[Token(Token = "0x4001112")]
	[FieldOffset(Offset = "0x0")]
	private static UxmlAttributeFlags s_CurrentDeserializeFlags;

	[Token(Token = "0x60026F4")]
	public abstract object CreateInstance();

	[Token(Token = "0x60026F5")]
	public abstract void Deserialize(object obj);

	[Token(Token = "0x60026F6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected UxmlSerializedData()
	{
	}
}
