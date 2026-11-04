// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingUpdater
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000026")]
internal class BindingUpdater
{
	[Token(Token = "0x2000027")]
	private sealed class CastDataSourceVisitor : ConcreteTypeVisitor
	{
		[Token(Token = "0x1700002A")]
		public DataBinding Binding
		{
			[Token(Token = "0x60000BA")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000BB")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002B")]
		public BindingContext bindingContext
		{
			[Token(Token = "0x60000BC")]
			[Address(RVA = "0x30888C0", Offset = "0x3086EC0", VA = "0x1830888C0")]
			[CompilerGenerated]
			get
			{
				return default(BindingContext);
			}
			[Token(Token = "0x60000BD")]
			[Address(RVA = "0x3088950", Offset = "0x3086F50", VA = "0x183088950")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002C")]
		public BindingResult result
		{
			[Token(Token = "0x60000BE")]
			[Address(RVA = "0x2D23E10", Offset = "0x2D22410", VA = "0x182D23E10")]
			[CompilerGenerated]
			get
			{
				return default(BindingResult);
			}
			[Token(Token = "0x60000BF")]
			[Address(RVA = "0x30889E0", Offset = "0x3086FE0", VA = "0x1830889E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3088750", Offset = "0x3086D50", VA = "0x183088750")]
		public void Reset()
		{
		}

		[Token(Token = "0x60000C1")]
		protected override void VisitContainer<TContainer>(ref TContainer container)
		{
		}

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public CastDataSourceVisitor()
		{
		}
	}

	[Token(Token = "0x2000028")]
	private sealed class UIPathVisitor : PathVisitor
	{
		[Token(Token = "0x1700002D")]
		public DataBinding binding
		{
			[Token(Token = "0x60000C3")]
			[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000C4")]
			[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002E")]
		public BindingUpdateStage direction
		{
			[Token(Token = "0x60000C5")]
			[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
			[CompilerGenerated]
			get
			{
				return default(BindingUpdateStage);
			}
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x1C43490", Offset = "0x1C41A90", VA = "0x181C43490")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002F")]
		public BindingContext bindingContext
		{
			[Token(Token = "0x60000C7")]
			[Address(RVA = "0x30972A0", Offset = "0x30958A0", VA = "0x1830972A0")]
			[CompilerGenerated]
			get
			{
				return default(BindingContext);
			}
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x3097350", Offset = "0x3095950", VA = "0x183097350")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000030")]
		public BindingResult result
		{
			[Token(Token = "0x60000C9")]
			[Address(RVA = "0x3097340", Offset = "0x3095940", VA = "0x183097340")]
			[CompilerGenerated]
			get
			{
				return default(BindingResult);
			}
			[Token(Token = "0x60000CA")]
			[Address(RVA = "0x30973E0", Offset = "0x30959E0", VA = "0x1830973E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x3097110", Offset = "0x3095710", VA = "0x183097110", Slot = "6")]
		public override void Reset()
		{
		}

		[Token(Token = "0x60000CC")]
		protected override void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
		{
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public UIPathVisitor()
		{
		}
	}

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CastDataSourceVisitor s_VisitDataSourceAsRootVisitor;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x8")]
	private static readonly UIPathVisitor s_VisitDataSourceAtPathVisitor;

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3086220", Offset = "0x3084820", VA = "0x183086220")]
	public bool ShouldProcessBindingAtStage(Binding bindingObject, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3086540", Offset = "0x3084B40", VA = "0x183086540")]
	private static bool ShouldProcessBindingAtStage(DataBinding dataBinding, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3086650", Offset = "0x3084C50", VA = "0x183086650")]
	private bool ShouldProcessBindingAtStage(CustomBinding customBinding, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3087DC0", Offset = "0x30863C0", VA = "0x183087DC0")]
	public BindingResult UpdateUI(in BindingContext context, Binding bindingObject)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3087750", Offset = "0x3085D50", VA = "0x183087750")]
	public BindingResult UpdateSource(in BindingContext context, Binding bindingObject)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3087940", Offset = "0x3085F40", VA = "0x183087940")]
	private BindingResult UpdateUI(in BindingContext context, DataBinding dataBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x30878F0", Offset = "0x3085EF0", VA = "0x1830878F0")]
	private BindingResult UpdateUI(in BindingContext context, CustomBinding customBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x30871F0", Offset = "0x30857F0", VA = "0x1830871F0")]
	private BindingResult UpdateDataSource(in BindingContext context, DataBinding dataBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x30871B0", Offset = "0x30857B0", VA = "0x1830871B0")]
	private BindingResult UpdateDataSource(in BindingContext context, CustomBinding customBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3086730", Offset = "0x3084D30", VA = "0x183086730")]
	private static BindingResult TryUpdateUIWithNonContainer(in BindingContext context, DataBinding binding, object value)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3087F50", Offset = "0x3086550", VA = "0x183087F50")]
	private static (bool, VisitReturnCode, BindingResult) VisitRoot(DataBinding dataBinding, ref object container, in BindingContext context)
	{
		return default((bool, VisitReturnCode, BindingResult));
	}

	[Token(Token = "0x60000B4")]
	private static (bool, VisitReturnCode, VisitReturnCode, BindingResult) VisitAtPath<TContainer>(DataBinding dataBinding, BindingUpdateStage direction, ref TContainer container, in PropertyPath path, in BindingContext context)
	{
		return default((bool, VisitReturnCode, VisitReturnCode, BindingResult));
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3085FE0", Offset = "0x30845E0", VA = "0x183085FE0")]
	internal static string GetVisitationErrorString(VisitReturnCode returnCode, in BindingContext context)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3085D40", Offset = "0x3084340", VA = "0x183085D40")]
	internal static string GetExtractValueErrorString(VisitReturnCode returnCode, object target, in PropertyPath path)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3085F60", Offset = "0x3084560", VA = "0x183085F60")]
	internal static string GetRootDataSourceError(object target)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BindingUpdater()
	{
	}
}
