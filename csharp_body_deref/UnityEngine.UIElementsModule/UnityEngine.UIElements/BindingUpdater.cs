// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingUpdater
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6A80090", Offset = "0x6A7F090", VA = "0x6A80090")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000BB")]
			[Address(RVA = "0x6A800A0", Offset = "0x6A7F0A0", VA = "0x6A800A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002B")]
		public BindingContext bindingContext
		{
			[Token(Token = "0x60000BC")]
			[Address(RVA = "0x6A800B0", Offset = "0x6A7F0B0", VA = "0x6A800B0")]
			[CompilerGenerated]
			get
			{
				return default(BindingContext);
			}
			[Token(Token = "0x60000BD")]
			[Address(RVA = "0x6A800D0", Offset = "0x6A7F0D0", VA = "0x6A800D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002C")]
		public BindingResult result
		{
			[Token(Token = "0x60000BE")]
			[Address(RVA = "0x6A80100", Offset = "0x6A7F100", VA = "0x6A80100")]
			[CompilerGenerated]
			get
			{
				return default(BindingResult);
			}
			[Token(Token = "0x60000BF")]
			[Address(RVA = "0x6A80110", Offset = "0x6A7F110", VA = "0x6A80110")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x6A7FF30", Offset = "0x6A7EF30", VA = "0x6A7FF30")]
		public void Reset()
		{
		}

		[Token(Token = "0x60000C1")]
		protected override void VisitContainer<TContainer>(ref TContainer container)
		{
		}

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x6A80070", Offset = "0x6A7F070", VA = "0x6A80070")]
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
			[Address(RVA = "0x6A80130", Offset = "0x6A7F130", VA = "0x6A80130")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000C4")]
			[Address(RVA = "0x6A80140", Offset = "0x6A7F140", VA = "0x6A80140")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002E")]
		public BindingUpdateStage direction
		{
			[Token(Token = "0x60000C5")]
			[Address(RVA = "0x6A80160", Offset = "0x6A7F160", VA = "0x6A80160")]
			[CompilerGenerated]
			get
			{
				return default(BindingUpdateStage);
			}
			[Token(Token = "0x60000C6")]
			[Address(RVA = "0x6A80170", Offset = "0x6A7F170", VA = "0x6A80170")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002F")]
		public BindingContext bindingContext
		{
			[Token(Token = "0x60000C7")]
			[Address(RVA = "0x6A80180", Offset = "0x6A7F180", VA = "0x6A80180")]
			[CompilerGenerated]
			get
			{
				return default(BindingContext);
			}
			[Token(Token = "0x60000C8")]
			[Address(RVA = "0x6A801A0", Offset = "0x6A7F1A0", VA = "0x6A801A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000030")]
		public BindingResult result
		{
			[Token(Token = "0x60000C9")]
			[Address(RVA = "0x6A801D0", Offset = "0x6A7F1D0", VA = "0x6A801D0")]
			[CompilerGenerated]
			get
			{
				return default(BindingResult);
			}
			[Token(Token = "0x60000CA")]
			[Address(RVA = "0x6A801E0", Offset = "0x6A7F1E0", VA = "0x6A801E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x6A80200", Offset = "0x6A7F200", VA = "0x6A80200", Slot = "6")]
		public override void Reset()
		{
		}

		[Token(Token = "0x60000CC")]
		protected override void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
		{
		}

		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x6A80080", Offset = "0x6A7F080", VA = "0x6A80080")]
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
	[Address(RVA = "0x6A7E2E0", Offset = "0x6A7D2E0", VA = "0x6A7E2E0")]
	public bool ShouldProcessBindingAtStage(Binding bindingObject, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x6A7E480", Offset = "0x6A7D480", VA = "0x6A7E480")]
	private static bool ShouldProcessBindingAtStage(DataBinding dataBinding, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x6A7E560", Offset = "0x6A7D560", VA = "0x6A7E560")]
	private bool ShouldProcessBindingAtStage(CustomBinding customBinding, BindingUpdateStage stage, bool versionChanged, bool dirty)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x6A7E620", Offset = "0x6A7D620", VA = "0x6A7E620")]
	public BindingResult UpdateUI(in BindingContext context, Binding bindingObject)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x6A7EAE0", Offset = "0x6A7DAE0", VA = "0x6A7EAE0")]
	public BindingResult UpdateSource(in BindingContext context, Binding bindingObject)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x6A7E780", Offset = "0x6A7D780", VA = "0x6A7E780")]
	private BindingResult UpdateUI(in BindingContext context, DataBinding dataBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x6A7EAB0", Offset = "0x6A7DAB0", VA = "0x6A7EAB0")]
	private BindingResult UpdateUI(in BindingContext context, CustomBinding customBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x6A7EC50", Offset = "0x6A7DC50", VA = "0x6A7EC50")]
	private BindingResult UpdateDataSource(in BindingContext context, DataBinding dataBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x6A7EFD0", Offset = "0x6A7DFD0", VA = "0x6A7EFD0")]
	private BindingResult UpdateDataSource(in BindingContext context, CustomBinding customBinding)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x6A7F000", Offset = "0x6A7E000", VA = "0x6A7F000")]
	private static BindingResult TryUpdateUIWithNonContainer(in BindingContext context, DataBinding binding, object value)
	{
		return default(BindingResult);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x6A7F8D0", Offset = "0x6A7E8D0", VA = "0x6A7F8D0")]
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
	[Address(RVA = "0x6A7FAC0", Offset = "0x6A7EAC0", VA = "0x6A7FAC0")]
	internal static string GetVisitationErrorString(VisitReturnCode returnCode, in BindingContext context)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x6A7FC80", Offset = "0x6A7EC80", VA = "0x6A7FC80")]
	internal static string GetExtractValueErrorString(VisitReturnCode returnCode, object target, in PropertyPath path)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x6A7FE40", Offset = "0x6A7EE40", VA = "0x6A7FE40")]
	internal static string GetRootDataSourceError(object target)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x6A7FFA0", Offset = "0x6A7EFA0", VA = "0x6A7FFA0")]
	public BindingUpdater()
	{
	}
}
