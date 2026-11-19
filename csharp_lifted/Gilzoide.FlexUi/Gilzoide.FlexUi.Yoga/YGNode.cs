// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.Yoga.YGNode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gilzoide.FlexUi.Yoga;

[Token(Token = "0x200001A")]
public struct YGNode : IDisposable, IEquatable<YGNode>
{
	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr _nodePtr;

	[Token(Token = "0x1700002D")]
	public bool IsNull
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x5212E30", Offset = "0x5211E30", VA = "0x5212E30")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$get_IsNull): clean
			return this._nodePtr == 0;
		}
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x5216DC0", Offset = "0x5215DC0", VA = "0x5216DC0")]
	internal YGNode(IntPtr nodePtr)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$.ctor): clean
		this._nodePtr = nodePtr;
		return;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x5212E40", Offset = "0x5211E40", VA = "0x5212E40")]
	public void Instantiate()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$Instantiate): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		if (g_data_075425f0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeNew";
			g_data_075425f0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		iVar1 = (*g_data_075425f0)();
		this._nodePtr = iVar1;
		return;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x5214390", Offset = "0x5213390", VA = "0x5214390", Slot = "4")]
	public void Dispose()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$Dispose): clean
		if (this._nodePtr != 0) {
			this.Free();
			this._nodePtr = 0;
		}
		return;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x5214CD0", Offset = "0x5213CD0", VA = "0x5214CD0")]
	public void ApplyTo(RectTransform rectTransform)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$ApplyTo): 8 lines keep C-only constructs
		IntPtr iVar1;
		float fVar2;
		float fVar3;
		sbyte local_48;
		sbyte local_38;

		iVar1 = this._nodePtr;
		if (g_data_07542668 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeLayoutGetTop";
			g_data_07542668 = (code)il2cpp_runtime_helper_03123230(&local_48);
		}
		fVar2 = (float)(*g_data_07542668)(iVar1);
		iVar1 = this._nodePtr;
		if (g_data_07542678 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeLayoutGetHeight";
			g_data_07542678 = (code)il2cpp_runtime_helper_03123230(&local_48);
		}
		fVar3 = (float)(*g_data_07542678)(iVar1);
		if (rectTransform == null) {
			throw new NullReferenceException();
		}
		rectTransform.SetInsetAndSizeFromParentEdge(2, fVar2, fVar3);
		iVar1 = this._nodePtr;
		if (g_data_07542660 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeLayoutGetLeft";
			g_data_07542660 = (code)il2cpp_runtime_helper_03123230(&local_48);
		}
		fVar2 = (float)(*g_data_07542660)(iVar1);
		iVar1 = this._nodePtr;
		if (g_data_07542670 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeLayoutGetWidth";
			g_data_07542670 = (code)il2cpp_runtime_helper_03123230(&local_48);
		}
		fVar3 = (float)(*g_data_07542670)(iVar1);
		rectTransform.SetInsetAndSizeFromParentEdge(0, fVar2, fVar3);
		return;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x52171A0", Offset = "0x52161A0", VA = "0x52171A0", Slot = "5")]
	public bool Equals(YGNode other)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$Equals): clean
		return (YGNode)this._nodePtr == other._nodePtr;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x520F620", Offset = "0x520E620", VA = "0x520F620")]
	public void StyleSetPosition(Edge edge, YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_0530f64b::switchdataD_01010858 +(long)(int)(&switchD_0530f64b::switchdataD_01010858)[(ulong)value >> 0x20]) {
			case 0x530f64d:
				iVar2 = this._nodePtr;
				if (g_data_075426e8 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPosition";
					g_data_075426e8 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_075426e8;
				break;
			case 0x530f6c0:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_075426e8;
				if (g_data_075426e8 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPosition";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_075426e8 = pcVar1;
				}
				break;
			case 0x530f738:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_075426f0;
				if (g_data_075426f0 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPositionPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_075426f0 = pcVar1;
				}
				break;
			case 0x530f7b9:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for position");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPosition);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2,edge);
		}
		return;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x5210E00", Offset = "0x520FE00", VA = "0x5210E00")]
	public void StyleSetWidth(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth): 8 lines keep C-only constructs
		code *pcVar1;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_38;
		sbyte local_28;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_05310e27::switchdataD_01010878 +(long)(int)(&switchD_05310e27::switchdataD_01010878)[(ulong)value >> 0x20]) {
			case 0x5310e29:
				iVar2 = this._nodePtr;
				if (g_data_07542728 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetWidth";
					g_data_07542728 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542728;
				break;
			case 0x5310e9c:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542728;
				if (g_data_07542728 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetWidth";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542728 = pcVar1;
				}
				break;
			case 0x5310f14:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542730;
				if (g_data_07542730 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetWidthPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542730 = pcVar1;
				}
				break;
			case 0x5310f91:
				iVar2 = this._nodePtr;
				if (g_data_07542738 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetWidthAuto";
					g_data_07542738 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				(*g_data_07542738)(iVar2);
				return;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x52110F0", Offset = "0x52100F0", VA = "0x52110F0")]
	public void StyleSetHeight(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight): 8 lines keep C-only constructs
		code *pcVar1;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_38;
		sbyte local_28;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_05311117::switchdataD_01010888 +(long)(int)(&switchD_05311117::switchdataD_01010888)[(ulong)value >> 0x20]) {
			case 0x5311119:
				iVar2 = this._nodePtr;
				if (g_data_07542740 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetHeight";
					g_data_07542740 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542740;
				break;
			case 0x531118c:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542740;
				if (g_data_07542740 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetHeight";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542740 = pcVar1;
				}
				break;
			case 0x5311204:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542748;
				if (g_data_07542748 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetHeightPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542748 = pcVar1;
				}
				break;
			case 0x5311281:
				iVar2 = this._nodePtr;
				if (g_data_07542750 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetHeightAuto";
					g_data_07542750 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				(*g_data_07542750)(iVar2);
				return;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x52113E0", Offset = "0x52103E0", VA = "0x52113E0")]
	public void StyleSetMinWidth(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_05311409::switchdataD_01010898 +(long)(int)(&switchD_05311409::switchdataD_01010898)[(ulong)value >> 0x20]) {
			case 0x531140b:
				iVar2 = this._nodePtr;
				if (g_data_07542758 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinWidth";
					g_data_07542758 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542758;
				break;
			case 0x531147e:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542758;
				if (g_data_07542758 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinWidth";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542758 = pcVar1;
				}
				break;
			case 0x53114f6:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542760;
				if (g_data_07542760 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinWidthPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542760 = pcVar1;
				}
				break;
			case 0x5311575:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min width");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinWidth);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x5211980", Offset = "0x5210980", VA = "0x5211980")]
	public void StyleSetMaxWidth(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_053119a9::switchdataD_010108b8 +(long)(int)(&switchD_053119a9::switchdataD_010108b8)[(ulong)value >> 0x20]) {
			case 0x53119ab:
				iVar2 = this._nodePtr;
				if (g_data_07542778 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxWidth";
					g_data_07542778 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542778;
				break;
			case 0x5311a1e:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542778;
				if (g_data_07542778 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxWidth";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542778 = pcVar1;
				}
				break;
			case 0x5311a96:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542780;
				if (g_data_07542780 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxWidthPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542780 = pcVar1;
				}
				break;
			case 0x5311b15:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max width");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxWidth);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x52116B0", Offset = "0x52106B0", VA = "0x52116B0")]
	public void StyleSetMinHeight(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_053116d9::switchdataD_010108a8 +(long)(int)(&switchD_053116d9::switchdataD_010108a8)[(ulong)value >> 0x20]) {
			case 0x53116db:
				iVar2 = this._nodePtr;
				if (g_data_07542768 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinHeight";
					g_data_07542768 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542768;
				break;
			case 0x531174e:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542768;
				if (g_data_07542768 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinHeight";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542768 = pcVar1;
				}
				break;
			case 0x53117c6:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542770;
				if (g_data_07542770 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMinHeightPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542770 = pcVar1;
				}
				break;
			case 0x5311845:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min height");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinHeight);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5211C50", Offset = "0x5210C50", VA = "0x5211C50")]
	public void StyleSetMaxHeight(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_05311c79::switchdataD_010108c8 +(long)(int)(&switchD_05311c79::switchdataD_010108c8)[(ulong)value >> 0x20]) {
			case 0x5311c7b:
				iVar2 = this._nodePtr;
				if (g_data_07542788 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxHeight";
					g_data_07542788 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542788;
				break;
			case 0x5311cee:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542788;
				if (g_data_07542788 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxHeight";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542788 = pcVar1;
				}
				break;
			case 0x5311d66:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542790;
				if (g_data_07542790 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMaxHeightPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542790 = pcVar1;
				}
				break;
			case 0x5311de5:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max height");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxHeight);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x52100B0", Offset = "0x520F0B0", VA = "0x52100B0")]
	public void StyleSetFlexBasis(YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis): 8 lines keep C-only constructs
		code *pcVar1;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_38;
		sbyte local_28;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_053100d7::switchdataD_01010868 +(long)(int)(&switchD_053100d7::switchdataD_01010868)[(ulong)value >> 0x20]) {
			case 0x53100d9:
				iVar2 = this._nodePtr;
				if (g_data_075426d0 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetFlexBasis";
					g_data_075426d0 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_075426d0;
				break;
			case 0x531014c:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_075426d0;
				if (g_data_075426d0 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetFlexBasis";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_075426d0 = pcVar1;
				}
				break;
			case 0x53101c4:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_075426d8;
				if (g_data_075426d8 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_38);
					uVar3 = (ulong)(uint)value.Value;
					g_data_075426d8 = pcVar1;
				}
				break;
			case 0x5310241:
				iVar2 = this._nodePtr;
				if (g_data_075426e0 == null) {
					local_38 = "flex-ui";
					local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
					g_data_075426e0 = (code)il2cpp_runtime_helper_03123230(&local_38);
				}
				(*g_data_075426e0)(iVar2);
				return;
			}
			(*pcVar1)(uVar3,iVar2);
		}
		return;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x52120F0", Offset = "0x52110F0", VA = "0x52120F0")]
	public void StyleSetMargin(Edge edge, YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin): 8 lines keep C-only constructs
		code *pcVar1;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_0531211b::switchdataD_010108d8 +(long)(int)(&switchD_0531211b::switchdataD_010108d8)[(ulong)value >> 0x20]) {
			case 0x531211d:
				iVar2 = this._nodePtr;
				if (g_data_075426f8 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMargin";
					g_data_075426f8 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_075426f8;
				break;
			case 0x5312190:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_075426f8;
				if (g_data_075426f8 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMargin";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_075426f8 = pcVar1;
				}
				break;
			case 0x5312208:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542700;
				if (g_data_07542700 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMarginPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542700 = pcVar1;
				}
				break;
			case 0x5312289:
				iVar2 = this._nodePtr;
				if (g_data_07542708 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetMarginAuto";
					g_data_07542708 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				(*g_data_07542708)(iVar2,edge);
				return;
			}
			(*pcVar1)(uVar3,iVar2,edge);
		}
		return;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5212680", Offset = "0x5211680", VA = "0x5212680")]
	public void StyleSetPadding(Edge edge, YGValue value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding): 12 lines keep C-only constructs
		code *pcVar1;
		Il2CppClass klass;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		String message;
		MethodInfo lastManagedFrame;
		IntPtr iVar2;
		ulong uVar3;
		sbyte local_40;
		sbyte local_30;

		if ((uint)value.Unit < 4) {
			uVar3 = (ulong)(uint)value.Value;
			switch((long)&switchD_053126ab::switchdataD_010108e8 +(long)(int)(&switchD_053126ab::switchdataD_010108e8)[(ulong)value >> 0x20]) {
			case 0x53126ad:
				iVar2 = this._nodePtr;
				if (g_data_07542710 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPadding";
					g_data_07542710 = (code)il2cpp_runtime_helper_03123230(&local_40);
				}
				uVar3 = SUB168(ZEXT416(0x7fc00000), 0);
				pcVar1 = g_data_07542710;
				break;
			case 0x5312720:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542710;
				if (g_data_07542710 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPadding";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542710 = pcVar1;
				}
				break;
			case 0x5312798:
				iVar2 = this._nodePtr;
				pcVar1 = g_data_07542718;
				if (g_data_07542718 == null) {
					local_40 = "flex-ui";
					local_30 = "FlexUi_NodeStyleSetPaddingPercent";
					pcVar1 = (code)il2cpp_runtime_helper_03123230(&local_40);
					uVar3 = (ulong)(uint)value.Value;
					g_data_07542718 = pcVar1;
				}
				break;
			case 0x5312819:
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(klass);
				paramName = il2cpp_codegen_get_runtime_metadata(&"value");
				message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for padding");
				__this_00 = new ArgumentOutOfRangeException(paramName, message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPadding);
				throw (object)__this_00;
			}
			(*pcVar1)(uVar3,iVar2,edge);
		}
		return;
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x5216E50", Offset = "0x5215E50", VA = "0x5216E50")]
	public void Free()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$Free): 5 lines keep C-only constructs
		IntPtr iVar1;
		GCHandle local_48;
		sbyte local_40;
		sbyte local_30;

		iVar1 = this._nodePtr;
		if (g_data_07542638 == null) {
			local_40 = "flex-ui";
			local_30 = "FlexUi_NodeGetContext";
			g_data_07542638 = (code)il2cpp_runtime_helper_03123230(&local_40);
			iVar1 = (*g_data_07542638)(iVar1);
		}
		else {
			iVar1 = (*g_data_07542638)(iVar1);
		}
		if (iVar1 == 0) {
			local_48.handle = (GCHandle)0;
			iVar1 = this._nodePtr;
		}
		else {
			local_48 = GCHandle.FromIntPtr(iVar1);
			if (local_48.handle != 0) {
				local_48.Free();
			}
			iVar1 = this._nodePtr;
		}
		if (g_data_075425f8 == null) {
			local_40 = "flex-ui";
			local_30 = "FlexUi_NodeFree";
			g_data_075425f8 = (code)il2cpp_runtime_helper_03123230(&local_40);
		}
		(*g_data_075425f8)(iVar1);
		return;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5214C30", Offset = "0x5213C30", VA = "0x5214C30")]
	public void CalculateLayout(float availableWidth, float availableHeight, Direction ownerDirection)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$CalculateLayout): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542600;
		iVar1 = this._nodePtr;
		if (g_data_07542600 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeCalculateLayout";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542600 = auVar2._0_8_;
		(*g_data_07542600)(availableWidth,availableHeight,iVar1,ownerDirection,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x52153F0", Offset = "0x52143F0", VA = "0x52153F0")]
	public bool InsertChild(YGNode child, int index)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$InsertChild): 8 lines keep C-only constructs
		IntPtr iVar1;
		ulong uVar2;
		object message;
		uint in_register_00000014;
		MethodInfo method_00;
		sbyte local_50;
		sbyte local_40;

		method_00 = (MethodInfo)CONCAT44(in_register_00000014, index);
		this.SetContext((GCHandle)0x0);
		iVar1 = this._nodePtr;
		if (g_data_07542640 == null) {
			local_50 = "flex-ui";
			local_40 = "FlexUi_NodeSetMeasureFunc";
			g_data_07542640 = (code)il2cpp_runtime_helper_03123230(&local_50);
		}
		(*g_data_07542640)(iVar1,0);
		iVar1 = this._nodePtr;
		if (g_data_07542608 == null) {
			local_50 = "flex-ui";
			local_40 = "FlexUi_NodeInsertChild";
			g_data_07542608 = (code)il2cpp_runtime_helper_03123230(&local_50);
		}
		uVar2 = (*g_data_07542608)(iVar1,child._nodePtr,index);
		message = (object)il2cpp_runtime_helper_03123770(uVar2);
		il2cpp_runtime_helper_03123680(uVar2);
		if (message != null) {
			Debug.LogError(message);
		}
		return message == null;
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x5215560", Offset = "0x5214560", VA = "0x5215560")]
	public void RemoveChild(YGNode child)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$RemoveChild): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542610;
		iVar1 = this._nodePtr;
		if (g_data_07542610 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeRemoveChild";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542610 = auVar2._0_8_;
		(*g_data_07542610)(iVar1,child._nodePtr,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x5215750", Offset = "0x5214750", VA = "0x5215750")]
	public void RemoveAllChildren()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$RemoveAllChildren): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542618 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeRemoveAllChildren";
			g_data_07542618 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542618)(iVar1);
		return;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5214EE0", Offset = "0x5213EE0", VA = "0x5214EE0")]
	public int GetChildCount()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$GetChildCount): 1 lines keep C-only constructs
		int iVar2;
		sbyte local_38;
		sbyte local_28;

		if (g_data_07542620 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeGetChildCount";
			g_data_07542620 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		return iVar2;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x520F180", Offset = "0x520E180", VA = "0x520F180")]
	public void SetConfig(YGConfig config)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$SetConfig): 4 lines keep C-only constructs
		IntPtr iVar1;
		ulong uVar2;
		object message;
		sbyte local_40;
		sbyte local_30;

		iVar1 = this._nodePtr;
		if (g_data_07542628 == null) {
			local_40 = "flex-ui";
			local_30 = "FlexUi_NodeSetConfig";
			g_data_07542628 = (code)il2cpp_runtime_helper_03123230(&local_40);
		}
		uVar2 = (*g_data_07542628)(iVar1);
		message = (object)il2cpp_runtime_helper_03123770(uVar2);
		il2cpp_runtime_helper_03123680(uVar2);
		if (message != null) {
			Debug.LogError(message);
		}
		return;
	}

	[Token(Token = "0x6000090")]
	public void SetContext<T>(T value)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x5214FE0", Offset = "0x5213FE0", VA = "0x5214FE0")]
	public void SetContext(GCHandle value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$SetContext): 5 lines keep C-only constructs
		IntPtr iVar1;
		IntPtr iVar2;
		GCHandle local_50;
		sbyte local_48;
		sbyte local_38;

		iVar1 = this._nodePtr;
		if (g_data_07542638 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeGetContext";
			g_data_07542638 = (code)il2cpp_runtime_helper_03123230(&local_48);
			iVar1 = (*g_data_07542638)(iVar1);
		}
		else {
			iVar1 = (*g_data_07542638)(iVar1);
		}
		if (iVar1 == 0) {
			local_50.handle = (GCHandle)0;
		}
		else {
			local_50 = GCHandle.FromIntPtr(iVar1);
			if (local_50.handle != 0) {
				local_50.Free();
			}
		}
		iVar1 = this._nodePtr;
		iVar2 = GCHandle.ToIntPtr(value);
		if (g_data_07542630 == null) {
			local_48 = "flex-ui";
			local_38 = "FlexUi_NodeSetContext";
			g_data_07542630 = (code)il2cpp_runtime_helper_03123230(&local_48);
		}
		(*g_data_07542630)(iVar1,iVar2);
		return;
	}

	[Token(Token = "0x6000092")]
	public T GetContext<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5217EF0", Offset = "0x5216EF0", VA = "0x5217EF0")]
	public GCHandle GetContext()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$GetContext): 3 lines keep C-only constructs
		IntPtr iVar1;
		GCHandle SVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542638 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeGetContext";
			g_data_07542638 = (code)il2cpp_runtime_helper_03123230(&local_38);
			iVar1 = (*g_data_07542638)(iVar1);
		}
		else {
			iVar1 = (*g_data_07542638)(iVar1);
		}
		if (iVar1 == 0) {
			return (GCHandle)0;
		}
		SVar2 = GCHandle.FromIntPtr(iVar1);
		return (GCHandle)SVar2.handle;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5218480", Offset = "0x5217480", VA = "0x5218480")]
	public void SetMeasureFunc(Yoga.YGMeasureFunc measureFunc)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc): clean
		Yoga.YGNodeSetMeasureFunc(this._nodePtr, measureFunc);
		return;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5214F60", Offset = "0x5213F60", VA = "0x5214F60")]
	public void SetMeasureFunc(IntPtr measureFunc)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542640;
		iVar1 = this._nodePtr;
		if (g_data_07542640 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetMeasureFunc";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542640 = auVar2._0_8_;
		(*g_data_07542640)(iVar1,measureFunc,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x52146B0", Offset = "0x52136B0", VA = "0x52146B0")]
	public bool HasMeasureFunc()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$HasMeasureFunc): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte cVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542648 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeHasMeasureFunc";
			g_data_07542648 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		cVar2 = (*g_data_07542648)(iVar1);
		return cVar2 != false;
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5214730", Offset = "0x5213730", VA = "0x5214730")]
	public void SetDirty()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$SetDirty): 5 lines keep C-only constructs
		IntPtr iVar1;
		sbyte cVar2;
		sbyte pcStack_40;
		sbyte pcStack_30;

		iVar1 = this._nodePtr;
		if (g_data_07542648 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeHasMeasureFunc";
			g_data_07542648 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
			cVar2 = (*g_data_07542648)(iVar1);
		}
		else {
			cVar2 = (*g_data_07542648)(iVar1);
		}
		if (cVar2 == false) {
			return;
		}
		iVar1 = this._nodePtr;
		if (g_data_07542650 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeSetDirty";
			g_data_07542650 = (code)il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		(*g_data_07542650)(iVar1);
		return;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x52170A0", Offset = "0x52160A0", VA = "0x52170A0")]
	public float LayoutGetLeft()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetLeft): 2 lines keep C-only constructs
		IntPtr iVar1;
		float fVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542660 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetLeft";
			g_data_07542660 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar2 = (float)(*g_data_07542660)(iVar1);
		return fVar2;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x5216FA0", Offset = "0x5215FA0", VA = "0x5216FA0")]
	public float LayoutGetTop()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetTop): 2 lines keep C-only constructs
		IntPtr iVar1;
		float fVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542668 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetTop";
			g_data_07542668 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar2 = (float)(*g_data_07542668)(iVar1);
		return fVar2;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x5217120", Offset = "0x5216120", VA = "0x5217120")]
	public float LayoutGetWidth()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetWidth): 2 lines keep C-only constructs
		IntPtr iVar1;
		float fVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542670 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetWidth";
			g_data_07542670 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar2 = (float)(*g_data_07542670)(iVar1);
		return fVar2;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x5217020", Offset = "0x5216020", VA = "0x5217020")]
	public float LayoutGetHeight()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetHeight): 2 lines keep C-only constructs
		IntPtr iVar1;
		float fVar2;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542678 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeLayoutGetHeight";
			g_data_07542678 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		fVar2 = (float)(*g_data_07542678)(iVar1);
		return fVar2;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x520FBF0", Offset = "0x520EBF0", VA = "0x520FBF0")]
	public void StyleSetDirection(Direction direction)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetDirection): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542680;
		iVar1 = this._nodePtr;
		if (g_data_07542680 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetDirection";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542680 = auVar2._0_8_;
		(*g_data_07542680)(iVar1,direction,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x520FDA0", Offset = "0x520EDA0", VA = "0x520FDA0")]
	public void StyleSetFlexDirection(FlexDirection flexDirection)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexDirection): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542688;
		iVar1 = this._nodePtr;
		if (g_data_07542688 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542688 = auVar2._0_8_;
		(*g_data_07542688)(iVar1,flexDirection,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5210790", Offset = "0x520F790", VA = "0x5210790")]
	public void StyleSetJustifyContent(Justify justifyContent)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetJustifyContent): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542690;
		iVar1 = this._nodePtr;
		if (g_data_07542690 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542690 = auVar2._0_8_;
		(*g_data_07542690)(iVar1,justifyContent,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x5210CA0", Offset = "0x520FCA0", VA = "0x5210CA0")]
	public void StyleSetAlignContent(Align alignContent)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignContent): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542698;
		iVar1 = this._nodePtr;
		if (g_data_07542698 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542698 = auVar2._0_8_;
		(*g_data_07542698)(iVar1,alignContent,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5210940", Offset = "0x520F940", VA = "0x5210940")]
	public void StyleSetAlignItems(Align alignItems)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignItems): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426a0;
		iVar1 = this._nodePtr;
		if (g_data_075426a0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426a0 = auVar2._0_8_;
		(*g_data_075426a0)(iVar1,alignItems,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5210AF0", Offset = "0x520FAF0", VA = "0x5210AF0")]
	public void StyleSetAlignSelf(Align alignSelf)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignSelf): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426a8;
		iVar1 = this._nodePtr;
		if (g_data_075426a8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426a8 = auVar2._0_8_;
		(*g_data_075426a8)(iVar1,alignSelf,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x520F4C0", Offset = "0x520E4C0", VA = "0x520F4C0")]
	public void StyleSetPositionType(PositionType positionType)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionType): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426b0;
		iVar1 = this._nodePtr;
		if (g_data_075426b0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPositionType";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426b0 = auVar2._0_8_;
		(*g_data_075426b0)(iVar1,positionType,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x520FF50", Offset = "0x520EF50", VA = "0x520FF50")]
	public void StyleSetFlexWrap(Wrap flexWrap)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexWrap): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426b8;
		iVar1 = this._nodePtr;
		if (g_data_075426b8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426b8 = auVar2._0_8_;
		(*g_data_075426b8)(iVar1,flexWrap,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5210400", Offset = "0x520F400", VA = "0x5210400")]
	public void StyleSetFlexGrow(float flexGrow)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexGrow): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_075426c0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexGrow";
			g_data_075426c0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426c0)(flexGrow,iVar1);
		return;
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x52105D0", Offset = "0x520F5D0", VA = "0x52105D0")]
	public void StyleSetFlexShrink(float flexShrink)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexShrink): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_075426c8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexShrink";
			g_data_075426c8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426c8)(flexShrink,iVar1);
		return;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x5217A90", Offset = "0x5216A90", VA = "0x5217A90")]
	public void StyleSetFlexBasis(float flexBasis)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_075426d0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasis";
			g_data_075426d0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426d0)(flexBasis,iVar1);
		return;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5217B20", Offset = "0x5216B20", VA = "0x5217B20")]
	public void StyleSetFlexBasisPercent(float flexBasis)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_075426d8 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
			g_data_075426d8 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426d8)(flexBasis,iVar1);
		return;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x5217BB0", Offset = "0x5216BB0", VA = "0x5217BB0")]
	public void StyleSetFlexBasisAuto()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisAuto): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_075426e0 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
			g_data_075426e0 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_075426e0)(iVar1);
		return;
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x52171B0", Offset = "0x52161B0", VA = "0x52171B0")]
	public void StyleSetPosition(Edge edge, float position)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte local_40;
		sbyte local_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426e8;
		iVar1 = this._nodePtr;
		if (g_data_075426e8 == null) {
			local_40 = "flex-ui";
			local_30 = "FlexUi_NodeStyleSetPosition";
			auVar2 = il2cpp_runtime_helper_03123230(&local_40);
		}
		g_data_075426e8 = auVar2._0_8_;
		(*g_data_075426e8)(position,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x5217240", Offset = "0x5216240", VA = "0x5217240")]
	public void StyleSetPositionPercent(Edge edge, float position)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionPercent): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426f0;
		iVar1 = this._nodePtr;
		if (g_data_075426f0 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426f0 = auVar2._0_8_;
		(*g_data_075426f0)(position,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x5217C30", Offset = "0x5216C30", VA = "0x5217C30")]
	public void StyleSetMargin(Edge edge, float margin)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_075426f8;
		iVar1 = this._nodePtr;
		if (g_data_075426f8 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMargin";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_075426f8 = auVar2._0_8_;
		(*g_data_075426f8)(margin,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x5217CC0", Offset = "0x5216CC0", VA = "0x5217CC0")]
	public void StyleSetMarginPercent(Edge edge, float margin)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginPercent): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542700;
		iVar1 = this._nodePtr;
		if (g_data_07542700 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542700 = auVar2._0_8_;
		(*g_data_07542700)(margin,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x5217D50", Offset = "0x5216D50", VA = "0x5217D50")]
	public void StyleSetMarginAuto(Edge edge)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginAuto): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542708;
		iVar1 = this._nodePtr;
		if (g_data_07542708 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542708 = auVar2._0_8_;
		(*g_data_07542708)(iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x5217DD0", Offset = "0x5216DD0", VA = "0x5217DD0")]
	public void StyleSetPadding(Edge edge, float padding)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542710;
		iVar1 = this._nodePtr;
		if (g_data_07542710 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPadding";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542710 = auVar2._0_8_;
		(*g_data_07542710)(padding,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x5217E60", Offset = "0x5216E60", VA = "0x5217E60")]
	public void StyleSetPaddingPercent(Edge edge, float padding)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPaddingPercent): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542718;
		iVar1 = this._nodePtr;
		if (g_data_07542718 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542718 = auVar2._0_8_;
		(*g_data_07542718)(padding,iVar1,edge,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x5212C60", Offset = "0x5211C60", VA = "0x5212C60")]
	public void StyleSetGap(Gutter gutter, float value)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetGap): 6 lines keep C-only constructs
		IntPtr iVar1;
		byte[] auVar2 = new byte[16];
		sbyte pcStack_40;
		sbyte pcStack_30;

		auVar2._8_8_ = method;
		auVar2._0_8_ = g_data_07542720;
		iVar1 = this._nodePtr;
		if (g_data_07542720 == null) {
			pcStack_40 = "flex-ui";
			pcStack_30 = "FlexUi_NodeStyleSetGap";
			auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
		}
		g_data_07542720 = auVar2._0_8_;
		(*g_data_07542720)(value,iVar1,gutter,auVar2._8_8_);
		return;
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x52172D0", Offset = "0x52162D0", VA = "0x52172D0")]
	public void StyleSetWidth(float width)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542728 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidth";
			g_data_07542728 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542728)(width,iVar1);
		return;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x5217360", Offset = "0x5216360", VA = "0x5217360")]
	public void StyleSetWidthPercent(float width)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542730 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidthPercent";
			g_data_07542730 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542730)(width,iVar1);
		return;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x52173F0", Offset = "0x52163F0", VA = "0x52173F0")]
	public void StyleSetWidthAuto()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthAuto): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542738 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetWidthAuto";
			g_data_07542738 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542738)(iVar1);
		return;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x5217470", Offset = "0x5216470", VA = "0x5217470")]
	public void StyleSetHeight(float height)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542740 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeight";
			g_data_07542740 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542740)(height,iVar1);
		return;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5217500", Offset = "0x5216500", VA = "0x5217500")]
	public void StyleSetHeightPercent(float height)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542748 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeightPercent";
			g_data_07542748 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542748)(height,iVar1);
		return;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5217590", Offset = "0x5216590", VA = "0x5217590")]
	public void StyleSetHeightAuto()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightAuto): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542750 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetHeightAuto";
			g_data_07542750 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542750)(iVar1);
		return;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5217610", Offset = "0x5216610", VA = "0x5217610")]
	public void StyleSetMinWidth(float minWidth)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542758 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinWidth";
			g_data_07542758 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542758)(minWidth,iVar1);
		return;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x52176A0", Offset = "0x52166A0", VA = "0x52176A0")]
	public void StyleSetMinWidthPercent(float minWidth)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidthPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542760 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
			g_data_07542760 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542760)(minWidth,iVar1);
		return;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5217850", Offset = "0x5216850", VA = "0x5217850")]
	public void StyleSetMinHeight(float minHeight)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542768 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinHeight";
			g_data_07542768 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542768)(minHeight,iVar1);
		return;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52178E0", Offset = "0x52168E0", VA = "0x52178E0")]
	public void StyleSetMinHeightPercent(float minHeight)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeightPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542770 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
			g_data_07542770 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542770)(minHeight,iVar1);
		return;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x5217730", Offset = "0x5216730", VA = "0x5217730")]
	public void StyleSetMaxWidth(float maxWidth)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542778 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxWidth";
			g_data_07542778 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542778)(maxWidth,iVar1);
		return;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x52177C0", Offset = "0x52167C0", VA = "0x52177C0")]
	public void StyleSetMaxWidthPercent(float maxWidth)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidthPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542780 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
			g_data_07542780 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542780)(maxWidth,iVar1);
		return;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5217970", Offset = "0x5216970", VA = "0x5217970")]
	public void StyleSetMaxHeight(float maxHeight)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542788 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxHeight";
			g_data_07542788 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542788)(maxHeight,iVar1);
		return;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5217A00", Offset = "0x5216A00", VA = "0x5217A00")]
	public void StyleSetMaxHeightPercent(float maxHeight)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeightPercent): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542790 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
			g_data_07542790 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542790)(maxHeight,iVar1);
		return;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5211F80", Offset = "0x5210F80", VA = "0x5211F80")]
	public void StyleSetAspectRatio(float aspectRatio)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c (Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAspectRatio): 2 lines keep C-only constructs
		IntPtr iVar1;
		sbyte local_38;
		sbyte local_28;

		iVar1 = this._nodePtr;
		if (g_data_07542798 == null) {
			local_38 = "flex-ui";
			local_28 = "FlexUi_NodeStyleSetAspectRatio";
			g_data_07542798 = (code)il2cpp_runtime_helper_03123230(&local_38);
		}
		(*g_data_07542798)(aspectRatio,iVar1);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gilzoide/FlexUi/Yoga/YGNode.c.

	// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<object>: 8 lines keep C-only constructs
	private object GetContext_object()
	{
		byte bVar1;
		GCHandle handle;
		ulong puVar2;
		object obj;
		Il2CppClass klass;
		object pIVar3;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		pIVar3 = null;
		handle = this.GetContext();
		if (handle.handle != 0) {
			if (((ulong)handle.handle & 1) == 0) {
				puVar2 = ((IntPtr)(intptr_t)handle.handle);
				obj = (object)*puVar2;
				klass = method.rgctx_data._0_T;
				bVar1 = (klass._2).bitflags1;
			}
			else {
				obj = GCHandle.GetTarget((intptr_t)handle.handle);
				klass = method.rgctx_data._0_T;
				bVar1 = (klass._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			if (obj == null) {
				pIVar3 = null;
			}
			else {
				pIVar3 = il2cpp_vm_Object_IsInst(obj, klass);
				if (pIVar3 == null) {
					throw new InvalidCastException();
				}
			}
		}
		return pIVar3;
	}

	// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<__Il2CppFullySharedGenericType>: 16 lines keep C-only constructs
	private __Il2CppFullySharedGenericType GetContext___Il2CppFullySharedGenericType()
	{
		byte bVar1;
		long lVar2;
		Il2CppRGCTXData pIVar3;
		GCHandle handle;
		ulong puVar4;
		object pIVar5;
		Il2CppClass klass;
		IntPtr __src;
		MethodInfo in_RDX;
		IntPtr extraout_RDX;
		byte puVar6;
		ulong __n;
		__Il2CppFullySharedGenericType UVar7;
		__Il2CppFullySharedGenericType UVar8;
		byte[] auStack_38 = new byte[8];

		pIVar3 = (in_RDX.field7_0x38).rgctx_data;
		if (pIVar3 == null) {
			il2cpp_codegen_rgctx_method_init(in_RDX);
			pIVar3 = (in_RDX.field7_0x38).rgctx_data;
		}
		__n = (ulong)(pIVar3.klass._2).stack_slot_size;
		lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
		*(ulong)(auStack_38 + lVar2 + -8) = 0x388e7d2;
		handle = this.GetContext();
		if (handle.handle == 0) {
			*(ulong)(auStack_38 + lVar2 + -8) = 0x388e808;
			memset(auStack_38 + lVar2, 0, __n);
			UVar7.klass = memset(method, 0, __n);
			UVar7.monitor = UVar7.monitor;
			return UVar7;
		}
		if (((ulong)handle.handle & 1) == 0) {
			*(ulong)(auStack_38 + lVar2 + -8) = 0x388e7e5;
			puVar4 = ((IntPtr)(intptr_t)handle.handle);
			puVar6 = auStack_38 + lVar2;
			pIVar5 = (object)*puVar4;
			klass = ((in_RDX.field7_0x38).rgctx_data).klass;
			bVar1 = (klass._2).bitflags1;
		}
		else {
			*(ulong)(auStack_38 + lVar2 + -8) = 0x388e828;
			pIVar5 = GCHandle.GetTarget((intptr_t)handle.handle);
			puVar6 = auStack_38 + lVar2;
			klass = ((in_RDX.field7_0x38).rgctx_data).klass;
			bVar1 = (klass._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			puVar6 = auStack_38 + lVar2;
			*(ulong)(auStack_38 + lVar2 + -8) = 0x388e844;
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		*(ulong)(puVar6 + -8) = 0x388e852;
		__src = (IntPtr)il2cpp_runtime_helper_030d6290(pIVar5, klass, auStack_38 + lVar2);
		*(ulong)(puVar6 + -8) = 0x388e860;
		UVar8.klass = memcpy(method, __src, __n);
		UVar8.monitor = extraout_RDX;
		return UVar8;
	}

	// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<object>: clean
	private void SetContext_object(object value)
	{
		GCHandle value_00;

		value_00 = GCHandle.Alloc(value);
		this.SetContext(value_00);
		return;
	}

	// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<__Il2CppFullySharedGenericType>: 7 lines keep C-only constructs
	private void SetContext___Il2CppFullySharedGenericType(__Il2CppFullySharedGenericType value)
	{
		Il2CppClass klass;
		long lVar1;
		object value_00;
		GCHandle value_01;
		MethodInfo method_00;
		ulong __n;
		__Il2CppFullySharedGenericType pUVar2;
		__Il2CppFullySharedGenericType __src;
		Il2CppRGCTXData pIVar3;
		byte[] auStack_38 = new byte[8];
		__Il2CppFullySharedGenericType local_30;

		method_00 = value.monitor;
		pUVar2 = value.klass;
		pIVar3 = (method_00.field7_0x38).rgctx_data;
		local_30 = pUVar2;
		if (pIVar3 == null) {
			il2cpp_codegen_rgctx_method_init(method_00);
			pIVar3 = (method_00.field7_0x38).rgctx_data;
		}
		__n = (ulong)(pIVar3.klass._2).stack_slot_size;
		lVar1 = -(__n + 0xf & 0xfffffffffffffff0);
		__src = (__Il2CppFullySharedGenericType)&local_30;
		if ((int)(pIVar3.klass._1).byval_arg.bits < 0) {
			__src = pUVar2;
		}
		*(ulong)(auStack_38 + lVar1 + -8) = 0x388e8f0;
		memcpy(auStack_38 + lVar1, __src, __n);
		klass = pIVar3.klass;
		*(ulong)(auStack_38 + lVar1 + -8) = 0x388e8fc;
		value_00 = (object)(auStack_38 + lVar1);
		*(ulong)(auStack_38 + lVar1 + -8) = 0x388e906;
		value_01 = GCHandle.Alloc(value_00);
		*(ulong)(auStack_38 + lVar1 + -8) = 0x388e913;
		this.SetContext(value_01);
		return;
	}
}
