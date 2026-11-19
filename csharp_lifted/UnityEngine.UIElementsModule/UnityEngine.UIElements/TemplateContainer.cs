// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TemplateContainer
// Update status: unchanged since the previous dump
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
[UxmlElement("Instance")]
[HideInInspector]
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
			[Address(RVA = "0x6B28F50", Offset = "0x6B27F50", VA = "0x6B28F50", Slot = "4")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000940")]
		public override string uxmlQualifiedName
		{
			[Token(Token = "0x600234E")]
			[Address(RVA = "0x6B28F80", Offset = "0x6B27F80", VA = "0x6B28F80", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600234F")]
		[Address(RVA = "0x6B28FF0", Offset = "0x6B27FF0", VA = "0x6B28FF0")]
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
		[Address(RVA = "0x6B29030", Offset = "0x6B28030", VA = "0x6B29030", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6002351")]
		[Address(RVA = "0x6B295C0", Offset = "0x6B285C0", VA = "0x6B295C0")]
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
		[Address(RVA = "0x6B28C90", Offset = "0x6B27C90", VA = "0x6B28C90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002344")]
		[Address(RVA = "0x6B28CA0", Offset = "0x6B27CA0", VA = "0x6B28CA0")]
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
		[Address(RVA = "0x6B28CC0", Offset = "0x6B27CC0", VA = "0x6B28CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002346")]
		[Address(RVA = "0x6B28CD0", Offset = "0x6B27CD0", VA = "0x6B28CD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700093E")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x600234A")]
		[Address(RVA = "0x6B28E10", Offset = "0x6B27E10", VA = "0x6B28E10", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x6B28CF0", Offset = "0x6B27CF0", VA = "0x6B28CF0")]
	public TemplateContainer()
	{
	}

	[Token(Token = "0x6002348")]
	[Address(RVA = "0x6B28D50", Offset = "0x6B27D50", VA = "0x6B28D50")]
	public TemplateContainer(string templateId)
	{
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x6B28DB0", Offset = "0x6B27DB0", VA = "0x6B28DB0")]
	internal TemplateContainer(string templateId, VisualTreeAsset templateSource)
	{
	}

	[Token(Token = "0x600234B")]
	[Address(RVA = "0x6B28E20", Offset = "0x6B27E20", VA = "0x6B28E20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetContentContainer(VisualElement content)
	{
	}
}
