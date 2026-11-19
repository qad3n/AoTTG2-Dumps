// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CreationContext
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B690B0", Offset = "0x6B680B0", VA = "0x6B690B0")]
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
		[Address(RVA = "0x6B689D0", Offset = "0x6B679D0", VA = "0x6B689D0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600278C")]
		[Address(RVA = "0x6B689E0", Offset = "0x6B679E0", VA = "0x6B689E0")]
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
		[Address(RVA = "0x6B689F0", Offset = "0x6B679F0", VA = "0x6B689F0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600278E")]
		[Address(RVA = "0x6B68A00", Offset = "0x6B67A00", VA = "0x6B68A00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A20")]
	internal TemplateAsset templateAsset
	{
		[Token(Token = "0x600278F")]
		[Address(RVA = "0x6B68A10", Offset = "0x6B67A10", VA = "0x6B68A10")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002790")]
		[Address(RVA = "0x6B68A20", Offset = "0x6B67A20", VA = "0x6B68A20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A21")]
	public VisualTreeAsset visualTreeAsset
	{
		[Token(Token = "0x6002791")]
		[Address(RVA = "0x6B68A30", Offset = "0x6B67A30", VA = "0x6B68A30")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002792")]
		[Address(RVA = "0x6B68A40", Offset = "0x6B67A40", VA = "0x6B68A40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A22")]
	public Dictionary<string, VisualElement> slotInsertionPoints
	{
		[Token(Token = "0x6002793")]
		[Address(RVA = "0x6B68A50", Offset = "0x6B67A50", VA = "0x6B68A50")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002794")]
		[Address(RVA = "0x6B68A60", Offset = "0x6B67A60", VA = "0x6B68A60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A23")]
	internal List<AttributeOverrideRange> attributeOverrides
	{
		[Token(Token = "0x6002795")]
		[Address(RVA = "0x6B68A70", Offset = "0x6B67A70", VA = "0x6B68A70")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002796")]
		[Address(RVA = "0x6B68A80", Offset = "0x6B67A80", VA = "0x6B68A80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A24")]
	internal List<SerializedDataOverrideRange> serializedDataOverrides
	{
		[Token(Token = "0x6002797")]
		[Address(RVA = "0x6B68A90", Offset = "0x6B67A90", VA = "0x6B68A90")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6002798")]
		[Address(RVA = "0x6B68AA0", Offset = "0x6B67AA0", VA = "0x6B68AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A25")]
	internal List<string> namesPath
	{
		[Token(Token = "0x6002799")]
		[Address(RVA = "0x6B68AB0", Offset = "0x6B67AB0", VA = "0x6B68AB0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600279A")]
		[Address(RVA = "0x6B68AC0", Offset = "0x6B67AC0", VA = "0x6B68AC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A26")]
	internal bool hasOverrides
	{
		[Token(Token = "0x600279B")]
		[Address(RVA = "0x6B5DF00", Offset = "0x6B5CF00", VA = "0x6B5DF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600279C")]
	[Address(RVA = "0x6B62020", Offset = "0x6B61020", VA = "0x6B62020")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(VisualTreeAsset vta)
	{
	}

	[Token(Token = "0x600279D")]
	[Address(RVA = "0x6B68BC0", Offset = "0x6B67BC0", VA = "0x6B68BC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides)
	{
	}

	[Token(Token = "0x600279E")]
	[Address(RVA = "0x6B68AD0", Offset = "0x6B67AD0", VA = "0x6B68AD0")]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x600279F")]
	[Address(RVA = "0x6B68CA0", Offset = "0x6B67CA0", VA = "0x6B68CA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, VisualTreeAsset vta, VisualElement target)
	{
	}

	[Token(Token = "0x60027A0")]
	[Address(RVA = "0x6B623A0", Offset = "0x6B613A0", VA = "0x6B623A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal CreationContext(Dictionary<string, VisualElement> slotInsertionPoints, List<AttributeOverrideRange> attributeOverrides, List<SerializedDataOverrideRange> serializedDataOverrides, VisualTreeAsset vta, VisualElement target, List<int> veaIdsPath, List<string> namesPath, TemplateAsset ta)
	{
	}

	[Token(Token = "0x60027A1")]
	[Address(RVA = "0x6B68D30", Offset = "0x6B67D30", VA = "0x6B68D30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60027A2")]
	[Address(RVA = "0x6B68DF0", Offset = "0x6B67DF0", VA = "0x6B68DF0", Slot = "4")]
	public bool Equals(CreationContext other)
	{
		return default(bool);
	}

	[Token(Token = "0x60027A3")]
	[Address(RVA = "0x6B68F50", Offset = "0x6B67F50", VA = "0x6B68F50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
