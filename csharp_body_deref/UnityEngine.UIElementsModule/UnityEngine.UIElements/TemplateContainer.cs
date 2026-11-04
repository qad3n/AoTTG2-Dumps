// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TemplateContainer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000495")]
[HideInInspector]
[UxmlElement("Instance")]
public class TemplateContainer : BindableElement
{
	[Token(Token = "0x2000496")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TemplateContainer, UxmlTraits>
	{
		[Token(Token = "0x1700093F")]
		public override string uxmlName
		{
			[Token(Token = "0x600234D")]
			[Address(RVA = "0x313B440", Offset = "0x3139A40", VA = "0x18313B440", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000940")]
		public override string uxmlQualifiedName
		{
			[Token(Token = "0x600234E")]
			[Address(RVA = "0x313B470", Offset = "0x3139A70", VA = "0x18313B470", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600234F")]
		[Address(RVA = "0x313B400", Offset = "0x3139A00", VA = "0x18313B400")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000497")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000F4A")]
		[FieldOffset(Offset = "0x90")]
		private UxmlStringAttributeDescription m_Template;

		[Token(Token = "0x6002350")]
		[Address(RVA = "0x313B4F0", Offset = "0x3139AF0", VA = "0x18313B4F0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6002351")]
		[Address(RVA = "0x313C2D0", Offset = "0x313A8D0", VA = "0x18313C2D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000F44")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId templateIdProperty;

	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId templateSourceProperty;

	[Token(Token = "0x4000F46")]
	internal const string k_ElementName = "Instance";

	[Token(Token = "0x4000F48")]
	[FieldOffset(Offset = "0x2E0")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000F49")]
	[FieldOffset(Offset = "0x2E8")]
	private VisualTreeAsset m_TemplateSource;

	[Token(Token = "0x1700093C")]
	[CreateProperty(ReadOnly = true)]
	public string templateId
	{
		[Token(Token = "0x6002343")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002344")]
		[Address(RVA = "0x312F030", Offset = "0x312D630", VA = "0x18312F030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700093D")]
	[CreateProperty(ReadOnly = true)]
	public VisualTreeAsset templateSource
	{
		[Token(Token = "0x6002345")]
		[Address(RVA = "0x312F020", Offset = "0x312D620", VA = "0x18312F020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002346")]
		[Address(RVA = "0x312F050", Offset = "0x312D650", VA = "0x18312F050")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700093E")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x600234A")]
		[Address(RVA = "0x312F000", Offset = "0x312D600", VA = "0x18312F000", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x312EF30", Offset = "0x312D530", VA = "0x18312EF30")]
	public TemplateContainer()
	{
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x312EEC0", Offset = "0x312D4C0", VA = "0x18312EEC0")]
	public TemplateContainer(string templateId)
	{
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x312EF90", Offset = "0x312D590", VA = "0x18312EF90")]
	internal TemplateContainer(string templateId, VisualTreeAsset templateSource)
	{
	}

	[Token(Token = "0x600234B")]
	[Address(RVA = "0x312ECB0", Offset = "0x312D2B0", VA = "0x18312ECB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetContentContainer(VisualElement content)
	{
	}
}
