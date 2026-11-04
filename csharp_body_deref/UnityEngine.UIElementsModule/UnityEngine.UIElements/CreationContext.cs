// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CreationContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000527")]
public struct CreationContext : IEquatable<CreationContext>
{
	[Token(Token = "0x2000528")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal struct AttributeOverrideRange
	{
		[Token(Token = "0x4001171")]
		[FieldOffset(Offset = "0x0")]
		internal readonly VisualTreeAsset sourceAsset;

		[Token(Token = "0x4001172")]
		[FieldOffset(Offset = "0x8")]
		internal readonly List<TemplateAsset.AttributeOverride> attributeOverrides;

		[Token(Token = "0x60027A5")]
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
		public AttributeOverrideRange(VisualTreeAsset sourceAsset, List<TemplateAsset.AttributeOverride> attributeOverrides)
		{
		}
	}

	[Token(Token = "0x2000529")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal struct SerializedDataOverrideRange
	{
		[Token(Token = "0x4001173")]
		[FieldOffset(Offset = "0x0")]
		internal readonly VisualTreeAsset sourceAsset;

		[Token(Token = "0x4001174")]
		[FieldOffset(Offset = "0x8")]
		internal readonly int templateId;

		[Token(Token = "0x4001175")]
		[FieldOffset(Offset = "0x10")]
		internal readonly List<TemplateAsset.UxmlSerializedDataOverride> attributeOverrides;
	}

	[Token(Token = "0x4001168")]
	[FieldOffset(Offset = "0x0")]
	public static readonly CreationContext Default;

	[Token(Token = "0x17000A1E")]
	public VisualElement target
	{
		[Token(Token = "0x600278B")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600278C")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A1F")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal List<int> veaIdsPath
	{
		[Token(Token = "0x600278D")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600278E")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A20")]
	internal TemplateAsset templateAsset
	{
		[Token(Token = "0x600278F")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002790")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A21")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6002791")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002792")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A22")]
	public Dictionary<string, VisualElement> slotInsertionPoints
	{
		[Token(Token = "0x6002793")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002794")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A23")]
	internal List<AttributeOverrideRange> attributeOverrides
	{
		[Token(Token = "0x6002795")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002796")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A24")]
	internal List<SerializedDataOverrideRange> serializedDataOverrides
	{
		[Token(Token = "0x6002797")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002798")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A25")]
	internal List<string> namesPath
	{
		[Token(Token = "0x6002799")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600279A")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A26")]
	internal bool hasOverrides
	{
		[Token(Token = "0x600279B")]
		[Address(RVA = "0x315C3E0", Offset = "0x315A9E0", VA = "0x18315C3E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600279C")]
	[Address(RVA = "0x315C160", Offset = "0x315A760", VA = "0x18315C160")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x600279D")]
	[Address(RVA = "0x315C0A0", Offset = "0x315A6A0", VA = "0x18315C0A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides)
	{
	}

	[Token(Token = "0x600279E")]
	[Address(RVA = "0x315C290", Offset = "0x315A890", VA = "0x18315C290")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x600279F")]
	[Address(RVA = "0x315C200", Offset = "0x315A800", VA = "0x18315C200")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x60027A0")]
	[Address(RVA = "0x315C300", Offset = "0x315A900", VA = "0x18315C300")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, List<SerializedDataOverrideRange> serializedDataOverrides, VisualTreeAsset vta, VisualElement target, List<int> veaIdsPath, List<string> namesPath, TemplateAsset ta)
	{
	}

	[Token(Token = "0x60027A1")]
	[Address(RVA = "0x315BE60", Offset = "0x315A460", VA = "0x18315BE60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60027A2")]
	[Address(RVA = "0x315BD00", Offset = "0x315A300", VA = "0x18315BD00", Slot = "4")]
	public bool Equals(CreationContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x60027A3")]
	[Address(RVA = "0x315BF30", Offset = "0x315A530", VA = "0x18315BF30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
