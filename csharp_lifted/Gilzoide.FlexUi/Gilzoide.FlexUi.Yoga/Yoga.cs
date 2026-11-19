// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.Yoga
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/Yoga.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200001C")]
public class Yoga
{
	[Token(Token = "0x200001D")]
	public delegate Vector2 YGMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode);

	[Token(Token = "0x4000090")]
	private const string YogaDll = "flex-ui";

	[PreserveSig]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5216A10", Offset = "0x5215A10", VA = "0x5216A10")]
	public static extern IntPtr YGConfigNew();

	[PreserveSig]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5216BA0", Offset = "0x5215BA0", VA = "0x5216BA0")]
	public static extern void YGConfigFree(IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5216990", Offset = "0x5215990", VA = "0x5216990")]
	public static extern IntPtr YGConfigGetDefault();

	[PreserveSig]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x5216C20", Offset = "0x5215C20", VA = "0x5216C20")]
	public static extern void YGConfigSetPointScaleFactor(IntPtr config, float enabled);

	[PreserveSig]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x5216CB0", Offset = "0x5215CB0", VA = "0x5216CB0")]
	public static extern void YGConfigSetErrata(IntPtr config, Errata errata);

	[PreserveSig]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x5216D30", Offset = "0x5215D30", VA = "0x5216D30")]
	public static extern void YGConfigSetExperimentalFeatureEnabled(IntPtr config, ExperimentalFeature feature, bool enabled);

	[PreserveSig]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5216DD0", Offset = "0x5215DD0", VA = "0x5216DD0")]
	public static extern IntPtr YGNodeNew();

	[PreserveSig]
	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5217F90", Offset = "0x5216F90", VA = "0x5217F90")]
	public static extern void YGNodeFree(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5218010", Offset = "0x5217010", VA = "0x5218010")]
	public static extern void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, Direction ownerDirection);

	[PreserveSig]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x52180B0", Offset = "0x52170B0", VA = "0x52180B0")]
	public static extern string YGNodeInsertChild(IntPtr node, IntPtr child, int index);

	[PreserveSig]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x5218160", Offset = "0x5217160", VA = "0x5218160")]
	public static extern void YGNodeRemoveChild(IntPtr node, IntPtr child);

	[PreserveSig]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52181E0", Offset = "0x52171E0", VA = "0x52181E0")]
	public static extern void YGNodeRemoveAllChildren(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5218260", Offset = "0x5217260", VA = "0x5218260")]
	public static extern int YGNodeGetChildCount(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x52182E0", Offset = "0x52172E0", VA = "0x52182E0")]
	public static extern string YGNodeSetConfig(IntPtr node, IntPtr config);

	[PreserveSig]
	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5218380", Offset = "0x5217380", VA = "0x5218380")]
	public static extern void YGNodeSetContext(IntPtr node, IntPtr context);

	[PreserveSig]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5218400", Offset = "0x5217400", VA = "0x5218400")]
	public static extern IntPtr YGNodeGetContext(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x5218570", Offset = "0x5217570", VA = "0x5218570")]
	public static extern void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc);

	[PreserveSig]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x52185F0", Offset = "0x52175F0", VA = "0x52185F0")]
	public static extern bool YGNodeHasMeasureFunc(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5218670", Offset = "0x5217670", VA = "0x5218670")]
	public static extern void YGNodeSetDirty(IntPtr node);

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5218490", Offset = "0x5217490", VA = "0x5218490")]
	public static void YGNodeSetMeasureFunc(IntPtr node, YGMeasureFunc measureFunc)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/Yoga.c (Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte pcStack_40;
		sbyte pcStack_30;

		iVar1 = Marshal.GetFunctionPointerForDelegate<Yoga.YGMeasureFunc>((object)measureFunc);
		if (g_data_07542640 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetMeasureFunc";
			g_data_07542640 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		(*g_data_07542640)(node,iVar1);
		return;
	}

	[PreserveSig]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x52186F0", Offset = "0x52176F0", VA = "0x52186F0")]
	public static extern float YGNodeLayoutGetLeft(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x5218770", Offset = "0x5217770", VA = "0x5218770")]
	public static extern float YGNodeLayoutGetTop(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x52187F0", Offset = "0x52177F0", VA = "0x52187F0")]
	public static extern float YGNodeLayoutGetWidth(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5218870", Offset = "0x5217870", VA = "0x5218870")]
	public static extern float YGNodeLayoutGetHeight(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x52188F0", Offset = "0x52178F0", VA = "0x52188F0")]
	public static extern void YGNodeStyleSetDirection(IntPtr node, Direction direction);

	[PreserveSig]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5218970", Offset = "0x5217970", VA = "0x5218970")]
	public static extern void YGNodeStyleSetFlexDirection(IntPtr node, FlexDirection flexDirection);

	[PreserveSig]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x52189F0", Offset = "0x52179F0", VA = "0x52189F0")]
	public static extern void YGNodeStyleSetJustifyContent(IntPtr node, Justify justifyContent);

	[PreserveSig]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5218A70", Offset = "0x5217A70", VA = "0x5218A70")]
	public static extern void YGNodeStyleSetAlignContent(IntPtr node, Align alignContent);

	[PreserveSig]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5218AF0", Offset = "0x5217AF0", VA = "0x5218AF0")]
	public static extern void YGNodeStyleSetAlignItems(IntPtr node, Align alignItems);

	[PreserveSig]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5218B70", Offset = "0x5217B70", VA = "0x5218B70")]
	public static extern void YGNodeStyleSetAlignSelf(IntPtr node, Align alignSelf);

	[PreserveSig]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5218BF0", Offset = "0x5217BF0", VA = "0x5218BF0")]
	public static extern void YGNodeStyleSetPositionType(IntPtr node, PositionType positionType);

	[PreserveSig]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5218C70", Offset = "0x5217C70", VA = "0x5218C70")]
	public static extern void YGNodeStyleSetFlexWrap(IntPtr node, Wrap flexWrap);

	[PreserveSig]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5218CF0", Offset = "0x5217CF0", VA = "0x5218CF0")]
	public static extern void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow);

	[PreserveSig]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x5218D80", Offset = "0x5217D80", VA = "0x5218D80")]
	public static extern void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink);

	[PreserveSig]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5218E10", Offset = "0x5217E10", VA = "0x5218E10")]
	public static extern void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5218EA0", Offset = "0x5217EA0", VA = "0x5218EA0")]
	public static extern void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis);

	[PreserveSig]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5218F30", Offset = "0x5217F30", VA = "0x5218F30")]
	public static extern void YGNodeStyleSetFlexBasisAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5218FB0", Offset = "0x5217FB0", VA = "0x5218FB0")]
	public static extern void YGNodeStyleSetPosition(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5219040", Offset = "0x5218040", VA = "0x5219040")]
	public static extern void YGNodeStyleSetPositionPercent(IntPtr node, Edge edge, float position);

	[PreserveSig]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x52190D0", Offset = "0x52180D0", VA = "0x52190D0")]
	public static extern void YGNodeStyleSetMargin(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x5219160", Offset = "0x5218160", VA = "0x5219160")]
	public static extern void YGNodeStyleSetMarginPercent(IntPtr node, Edge edge, float margin);

	[PreserveSig]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x52191F0", Offset = "0x52181F0", VA = "0x52191F0")]
	public static extern void YGNodeStyleSetMarginAuto(IntPtr node, Edge edge);

	[PreserveSig]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5219270", Offset = "0x5218270", VA = "0x5219270")]
	public static extern void YGNodeStyleSetPadding(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x5219300", Offset = "0x5218300", VA = "0x5219300")]
	public static extern void YGNodeStyleSetPaddingPercent(IntPtr node, Edge edge, float padding);

	[PreserveSig]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5219390", Offset = "0x5218390", VA = "0x5219390")]
	public static extern void YGNodeStyleSetGap(IntPtr node, Gutter gutter, float gapLength);

	[PreserveSig]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x5219420", Offset = "0x5218420", VA = "0x5219420")]
	public static extern void YGNodeStyleSetWidth(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x52194B0", Offset = "0x52184B0", VA = "0x52194B0")]
	public static extern void YGNodeStyleSetWidthPercent(IntPtr node, float width);

	[PreserveSig]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x5219540", Offset = "0x5218540", VA = "0x5219540")]
	public static extern void YGNodeStyleSetWidthAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x52195C0", Offset = "0x52185C0", VA = "0x52195C0")]
	public static extern void YGNodeStyleSetHeight(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x5219650", Offset = "0x5218650", VA = "0x5219650")]
	public static extern void YGNodeStyleSetHeightPercent(IntPtr node, float height);

	[PreserveSig]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x52196E0", Offset = "0x52186E0", VA = "0x52196E0")]
	public static extern void YGNodeStyleSetHeightAuto(IntPtr node);

	[PreserveSig]
	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5219760", Offset = "0x5218760", VA = "0x5219760")]
	public static extern void YGNodeStyleSetMinWidth(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x52197F0", Offset = "0x52187F0", VA = "0x52197F0")]
	public static extern void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth);

	[PreserveSig]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5219880", Offset = "0x5218880", VA = "0x5219880")]
	public static extern void YGNodeStyleSetMinHeight(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5219910", Offset = "0x5218910", VA = "0x5219910")]
	public static extern void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight);

	[PreserveSig]
	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x52199A0", Offset = "0x52189A0", VA = "0x52199A0")]
	public static extern void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5219A30", Offset = "0x5218A30", VA = "0x5219A30")]
	public static extern void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth);

	[PreserveSig]
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5219AC0", Offset = "0x5218AC0", VA = "0x5219AC0")]
	public static extern void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x5219B50", Offset = "0x5218B50", VA = "0x5219B50")]
	public static extern void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight);

	[PreserveSig]
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x5219BE0", Offset = "0x5218BE0", VA = "0x5219BE0")]
	public static extern void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio);

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5219D30", Offset = "0x5218D30", VA = "0x5219D30")]
	public Yoga()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/Yoga.c (Gilzoide.FlexUi.Yoga.Yoga$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gilzoide/FlexUi/Yoga/Yoga.c.

	// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$.ctor: 4 lines keep C-only constructs
	private void YGMeasureFunc__ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar1 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar2 = il2cpp_runtime_helper_030d61c0();
		if (cVar2 == false) {
			if (@object == null) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
		}
		else if (cVar1 == '\x05') {
			this.invoke_impl = (intptr_t)&label_02d49c90;
			goto label_05315b86;
		}
		this.invoke_impl = this.method_ptr;
		this.method_code = (intptr_t)this.m_target;
	label_05315b86: ;
		this.extra_arg = (intptr_t)&label_02d49c00;
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigGetDefault: 1 lines keep C-only constructs
	private static IntPtr YGConfigGetDefault()
	{
		IntPtr iVar1;
		sbyte local_30;
		sbyte local_20;

		if (g_data_075425d0 == null) {
			local_30 = "flex-ui";
			local_20 = "FlexUi_ConfigGetDefault";
			g_data_075425d0 = (code)il2cpp_runtime_helper_03123230(&local_30);
			return iVar1;
		}
		return iVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigNew: 1 lines keep C-only constructs
	private static IntPtr YGConfigNew()
	{
		IntPtr iVar1;
		sbyte local_30;
		sbyte local_20;

		if (g_data_075425c0 == null) {
			local_30 = "flex-ui";
			local_20 = "FlexUi_ConfigNew";
			g_data_075425c0 = (code)il2cpp_runtime_helper_03123230(&local_30);
			return iVar1;
		}
		return iVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigFree: 2 lines keep C-only constructs
	private static void YGConfigFree(IntPtr config)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075425c8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_ConfigFree";
			g_data_075425c8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075425c8)(config);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetPointScaleFactor: 2 lines keep C-only constructs
	private static void YGConfigSetPointScaleFactor(IntPtr config, float enabled)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075425d8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_ConfigSetPointScaleFactor";
			g_data_075425d8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075425d8)(enabled,config);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetErrata: 6 lines keep C-only constructs
	private static void YGConfigSetErrata(IntPtr config, int errata)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075425e0;
		if (g_data_075425e0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_ConfigSetErrata";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075425e0 = auVar1._0_8_;
		(*g_data_075425e0)(config,errata,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetExperimentalFeatureEnabled: 2 lines keep C-only constructs
	private static void YGConfigSetExperimentalFeatureEnabled(IntPtr config, int feature, bool enabled)
	{
		sbyte pcStack_48;
		sbyte pcStack_38;

		if (g_data_075425e8 == null) {
			pcStack_48 = "flex-ui";
			pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
			g_data_075425e8 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
		}
		(*g_data_075425e8)(config,feature,enabled);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeNew: 1 lines keep C-only constructs
	private static IntPtr YGNodeNew()
	{
		IntPtr iVar1;
		sbyte local_30;
		sbyte local_20;

		if (g_data_075425f0 == null) {
			local_30 = "flex-ui";
			local_20 = "FlexUi_NodeNew";
			g_data_075425f0 = (code)il2cpp_runtime_helper_03123230(&local_30);
			return iVar1;
		}
		return iVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeFree: 2 lines keep C-only constructs
	private static void YGNodeFree(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075425f8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeFree";
			g_data_075425f8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075425f8)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeCalculateLayout: 6 lines keep C-only constructs
	private static void YGNodeCalculateLayout(IntPtr node, float availableWidth, float availableHeight, int ownerDirection)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542600;
		if (g_data_07542600 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeCalculateLayout";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542600 = auVar1._0_8_;
		(*g_data_07542600)(availableWidth,availableHeight,node,ownerDirection,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeInsertChild: 3 lines keep C-only constructs
	private static String YGNodeInsertChild(IntPtr node, IntPtr child, int index)
	{
		ulong uVar1;
		String pSVar2;
		sbyte pcStack_48;
		sbyte pcStack_38;

		if (g_data_07542608 == null) {
			pcStack_48 = "flex-ui";
			pcStack_38 = "FlexUi_NodeInsertChild";
			g_data_07542608 = (code)il2cpp_runtime_helper_03123230(&pcStack_48);
		}
		uVar1 = (*g_data_07542608)(node,child,index);
		il2cpp_runtime_helper_03123680(uVar1);
		return pSVar2;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveChild: 6 lines keep C-only constructs
	private static void YGNodeRemoveChild(IntPtr node, IntPtr child)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542610;
		if (g_data_07542610 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeRemoveChild";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542610 = auVar1._0_8_;
		(*g_data_07542610)(node,child,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveAllChildren: 2 lines keep C-only constructs
	private static void YGNodeRemoveAllChildren(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542618 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeRemoveAllChildren";
			g_data_07542618 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542618)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetChildCount: 1 lines keep C-only constructs
	private static int YGNodeGetChildCount(IntPtr node)
	{
		int iVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542620 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeGetChildCount";
			g_data_07542620 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		return iVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetConfig: 7 lines keep C-only constructs
	private static String YGNodeSetConfig(IntPtr node, IntPtr config)
	{
		ulong uVar1;
		String pSVar2;
		byte[] auVar3 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar3._8_8_ = method;
		auVar3._0_8_ = g_data_07542628;
		if (g_data_07542628 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetConfig";
			auVar3 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542628 = auVar3._0_8_;
		uVar1 = (*g_data_07542628)(node,config,auVar3._8_8_);
		il2cpp_runtime_helper_03123680(uVar1);
		return pSVar2;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetContext: 6 lines keep C-only constructs
	private static void YGNodeSetContext(IntPtr node, IntPtr context)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542630;
		if (g_data_07542630 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetContext";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542630 = auVar1._0_8_;
		(*g_data_07542630)(node,context,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetContext: 1 lines keep C-only constructs
	private static IntPtr YGNodeGetContext(IntPtr node)
	{
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542638 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeGetContext";
			g_data_07542638 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		return iVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc: 6 lines keep C-only constructs
	private static void YGNodeSetMeasureFunc(IntPtr node, IntPtr measureFunc)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542640;
		if (g_data_07542640 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetMeasureFunc";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542640 = auVar1._0_8_;
		(*g_data_07542640)(node,measureFunc,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeHasMeasureFunc: 2 lines keep C-only constructs
	private static bool YGNodeHasMeasureFunc(IntPtr node)
	{
		sbyte cVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542648 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeHasMeasureFunc";
			g_data_07542648 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		cVar1 = (*g_data_07542648)(node);
		return cVar1 != false;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetDirty: 2 lines keep C-only constructs
	private static void YGNodeSetDirty(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542650 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeSetDirty";
			g_data_07542650 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542650)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetLeft: 2 lines keep C-only constructs
	private static float YGNodeLayoutGetLeft(IntPtr node)
	{
		float fVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542660 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetLeft";
			g_data_07542660 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar1 = (float)(*g_data_07542660)(node);
		return fVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetTop: 2 lines keep C-only constructs
	private static float YGNodeLayoutGetTop(IntPtr node)
	{
		float fVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542668 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetTop";
			g_data_07542668 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar1 = (float)(*g_data_07542668)(node);
		return fVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetWidth: 2 lines keep C-only constructs
	private static float YGNodeLayoutGetWidth(IntPtr node)
	{
		float fVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542670 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetWidth";
			g_data_07542670 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar1 = (float)(*g_data_07542670)(node);
		return fVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetHeight: 2 lines keep C-only constructs
	private static float YGNodeLayoutGetHeight(IntPtr node)
	{
		float fVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542678 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetHeight";
			g_data_07542678 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar1 = (float)(*g_data_07542678)(node);
		return fVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetDirection: 6 lines keep C-only constructs
	private static void YGNodeStyleSetDirection(IntPtr node, int direction)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542680;
		if (g_data_07542680 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetDirection";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542680 = auVar1._0_8_;
		(*g_data_07542680)(node,direction,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexDirection: 6 lines keep C-only constructs
	private static void YGNodeStyleSetFlexDirection(IntPtr node, int flexDirection)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542688;
		if (g_data_07542688 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542688 = auVar1._0_8_;
		(*g_data_07542688)(node,flexDirection,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetJustifyContent: 6 lines keep C-only constructs
	private static void YGNodeStyleSetJustifyContent(IntPtr node, int justifyContent)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542690;
		if (g_data_07542690 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542690 = auVar1._0_8_;
		(*g_data_07542690)(node,justifyContent,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignContent: 6 lines keep C-only constructs
	private static void YGNodeStyleSetAlignContent(IntPtr node, int alignContent)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542698;
		if (g_data_07542698 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542698 = auVar1._0_8_;
		(*g_data_07542698)(node,alignContent,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignItems: 6 lines keep C-only constructs
	private static void YGNodeStyleSetAlignItems(IntPtr node, int alignItems)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426a0;
		if (g_data_075426a0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426a0 = auVar1._0_8_;
		(*g_data_075426a0)(node,alignItems,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignSelf: 6 lines keep C-only constructs
	private static void YGNodeStyleSetAlignSelf(IntPtr node, int alignSelf)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426a8;
		if (g_data_075426a8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426a8 = auVar1._0_8_;
		(*g_data_075426a8)(node,alignSelf,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionType: 6 lines keep C-only constructs
	private static void YGNodeStyleSetPositionType(IntPtr node, int positionType)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426b0;
		if (g_data_075426b0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPositionType";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426b0 = auVar1._0_8_;
		(*g_data_075426b0)(node,positionType,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexWrap: 6 lines keep C-only constructs
	private static void YGNodeStyleSetFlexWrap(IntPtr node, int flexWrap)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426b8;
		if (g_data_075426b8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426b8 = auVar1._0_8_;
		(*g_data_075426b8)(node,flexWrap,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexGrow: 2 lines keep C-only constructs
	private static void YGNodeStyleSetFlexGrow(IntPtr node, float flexGrow)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075426c0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexGrow";
			g_data_075426c0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426c0)(flexGrow,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexShrink: 2 lines keep C-only constructs
	private static void YGNodeStyleSetFlexShrink(IntPtr node, float flexShrink)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075426c8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexShrink";
			g_data_075426c8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426c8)(flexShrink,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasis: 2 lines keep C-only constructs
	private static void YGNodeStyleSetFlexBasis(IntPtr node, float flexBasis)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075426d0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasis";
			g_data_075426d0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426d0)(flexBasis,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetFlexBasisPercent(IntPtr node, float flexBasis)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075426d8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
			g_data_075426d8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426d8)(flexBasis,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisAuto: 2 lines keep C-only constructs
	private static void YGNodeStyleSetFlexBasisAuto(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_075426e0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
			g_data_075426e0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426e0)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPosition: 6 lines keep C-only constructs
	private static void YGNodeStyleSetPosition(IntPtr node, int edge, float position)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426e8;
		if (g_data_075426e8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPosition";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426e8 = auVar1._0_8_;
		(*g_data_075426e8)(position,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionPercent: 6 lines keep C-only constructs
	private static void YGNodeStyleSetPositionPercent(IntPtr node, int edge, float position)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426f0;
		if (g_data_075426f0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426f0 = auVar1._0_8_;
		(*g_data_075426f0)(position,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMargin: 6 lines keep C-only constructs
	private static void YGNodeStyleSetMargin(IntPtr node, int edge, float margin)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_075426f8;
		if (g_data_075426f8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMargin";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426f8 = auVar1._0_8_;
		(*g_data_075426f8)(margin,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginPercent: 6 lines keep C-only constructs
	private static void YGNodeStyleSetMarginPercent(IntPtr node, int edge, float margin)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542700;
		if (g_data_07542700 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542700 = auVar1._0_8_;
		(*g_data_07542700)(margin,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginAuto: 6 lines keep C-only constructs
	private static void YGNodeStyleSetMarginAuto(IntPtr node, int edge)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542708;
		if (g_data_07542708 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542708 = auVar1._0_8_;
		(*g_data_07542708)(node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPadding: 6 lines keep C-only constructs
	private static void YGNodeStyleSetPadding(IntPtr node, int edge, float padding)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542710;
		if (g_data_07542710 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPadding";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542710 = auVar1._0_8_;
		(*g_data_07542710)(padding,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPaddingPercent: 6 lines keep C-only constructs
	private static void YGNodeStyleSetPaddingPercent(IntPtr node, int edge, float padding)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542718;
		if (g_data_07542718 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542718 = auVar1._0_8_;
		(*g_data_07542718)(padding,node,edge,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetGap: 6 lines keep C-only constructs
	private static void YGNodeStyleSetGap(IntPtr node, int gutter, float gapLength)
	{
		byte[] auVar1 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar1._8_8_ = method;
		auVar1._0_8_ = g_data_07542720;
		if (g_data_07542720 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetGap";
			auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542720 = auVar1._0_8_;
		(*g_data_07542720)(gapLength,node,gutter,auVar1._8_8_);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidth: 2 lines keep C-only constructs
	private static void YGNodeStyleSetWidth(IntPtr node, float width)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542728 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidth";
			g_data_07542728 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542728)(width,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetWidthPercent(IntPtr node, float width)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542730 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidthPercent";
			g_data_07542730 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542730)(width,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthAuto: 2 lines keep C-only constructs
	private static void YGNodeStyleSetWidthAuto(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542738 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidthAuto";
			g_data_07542738 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542738)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeight: 2 lines keep C-only constructs
	private static void YGNodeStyleSetHeight(IntPtr node, float height)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542740 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeight";
			g_data_07542740 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542740)(height,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetHeightPercent(IntPtr node, float height)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542748 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeightPercent";
			g_data_07542748 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542748)(height,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightAuto: 2 lines keep C-only constructs
	private static void YGNodeStyleSetHeightAuto(IntPtr node)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542750 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeightAuto";
			g_data_07542750 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542750)(node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidth: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMinWidth(IntPtr node, float minWidth)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542758 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinWidth";
			g_data_07542758 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542758)(minWidth,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidthPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMinWidthPercent(IntPtr node, float minWidth)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542760 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
			g_data_07542760 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542760)(minWidth,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeight: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMinHeight(IntPtr node, float minHeight)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542768 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinHeight";
			g_data_07542768 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542768)(minHeight,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeightPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMinHeightPercent(IntPtr node, float minHeight)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542770 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
			g_data_07542770 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542770)(minHeight,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidth: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMaxWidth(IntPtr node, float maxWidth)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542778 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxWidth";
			g_data_07542778 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542778)(maxWidth,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidthPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMaxWidthPercent(IntPtr node, float maxWidth)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542780 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
			g_data_07542780 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542780)(maxWidth,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeight: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMaxHeight(IntPtr node, float maxHeight)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542788 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxHeight";
			g_data_07542788 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542788)(maxHeight,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeightPercent: 2 lines keep C-only constructs
	private static void YGNodeStyleSetMaxHeightPercent(IntPtr node, float maxHeight)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542790 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
			g_data_07542790 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542790)(maxHeight,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAspectRatio: 2 lines keep C-only constructs
	private static void YGNodeStyleSetAspectRatio(IntPtr node, float aspectRatio)
	{
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542798 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetAspectRatio";
			g_data_07542798 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542798)(aspectRatio,node);
		return;
	}

	// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$Invoke: clean
	private Vector2 YGMeasureFunc_Invoke(IntPtr nodePtr, float width, int widthMode, float height, int heightMode)
	{
		Vector2 UVar1;

		UVar1 = (Vector2)(*(code)this.invoke_impl)(this.method_code);
		return (Vector2)UVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$BeginInvoke: 1 lines keep C-only constructs
	private IAsyncResult YGMeasureFunc_BeginInvoke(IntPtr nodePtr, float width, int widthMode, float height, int heightMode, AsyncCallback callback, object @object)
	{
		IAsyncResult pSVar1;
		IntPtr local_60;
		object local_58;

		local_60 = nodePtr;
		local_58 = (object)local_60;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &local_58, callback, @object);
		return pSVar1;
	}

	// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$EndInvoke: 3 lines keep C-only constructs
	private Vector2 YGMeasureFunc_EndInvoke(IAsyncResult result)
	{
		object obj;
		Vector2 pUVar1;

		obj = (object)il2cpp_runtime_helper_03159300(result, 0);
		if (obj == null) {
			throw new NullReferenceException();
		}
		pUVar1 = il2cpp_vm_Object_Unbox(obj);
		return (UnityEngine_Vector2_o)*pUVar1;
	}
}
