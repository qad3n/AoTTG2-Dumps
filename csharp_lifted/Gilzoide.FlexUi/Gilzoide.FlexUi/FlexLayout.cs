// ==================== AoTTG2 cross-reference ====================
// Type: Gilzoide.FlexUi.FlexLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gilzoide/FlexUi/FlexLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gilzoide.FlexUi;

[Token(Token = "0x2000002")]
[ExecuteAlways]
[RequireComponent(typeof(RectTransform))]
public class FlexLayout : UIBehaviour, IComparer<FlexLayout>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000003")]
	[CompilerGenerated]
	private struct _003CRefreshRootLayout_003Ed__155 : IAsyncStateMachine
	{
		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FlexLayout _003C_003E4__this;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private FlexLayout _003Croot_003E5__2;

		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.YieldAwaiter _003C_003Eu__1;

		[Token(Token = "0x600005F")]
		[Address(RVA = "0x5215BC0", Offset = "0x5214BC0", VA = "0x5215BC0", Slot = "4")]
		private void MoveNext()
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$MoveNext): 2 lines keep C-only constructs
			FlexLayout x;
			bool bVar1;
			FlexLayout pGVar2;
			int iVar3;
			YieldAwaitable.YieldAwaiter[] local_58 = new YieldAwaitable.YieldAwaiter[8];
			YieldAwaitable[] local_50 = new YieldAwaitable[8];
			FlexLayout.d__155<RefreshRootLayout> local_48;
			int[] local_3c = new int[3];
			FlexLayout.d__155<RefreshRootLayout>* local_28;

			local_48 = this;
			local_58[0] = (YieldAwaitable.YieldAwaiter)0x0;
			local_50[0]._tail[0] = (YieldAwaitable)(byte[])0x0;
			local_3c[0] = this.__1__state;
			if (local_3c[0] == 0) {
		label_05315da3: ;
				local_28 = &local_48;
				local_3c[1] = 0;
				local_3c[2] = 0;
				local_58[0] = (YieldAwaitable.YieldAwaiter)this._tail[0];
				this._tail[0] = 0;
				local_3c[0] = -1;
				this.__1__state = -1;
		label_05315dbc: ;
				local_58.GetResult();
				pGVar2 = local_48._root_5__2;
				bVar1 = ((bool)(Object)pGVar2);
				iVar3 = 9;
				if (bVar1) {
					pGVar2 = local_48._root_5__2;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
					bVar1 = pGVar2.IsActive();
					if (bVar1) {
						pGVar2 = local_48._root_5__2;
						if (pGVar2 == null) {
							throw new NullReferenceException();
						}
						pGVar2 = pGVar2._parentNode;
						bVar1 = ((Object)pGVar2 == null);
						if (bVar1) {
							pGVar2 = local_48._root_5__2;
							if (pGVar2 == null) {
								throw new NullReferenceException();
							}
							pGVar2.RefreshLayout();
						}
					}
				}
			}
			else {
				pGVar2 = this.__4__this;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				while(true) {
					x = pGVar2._parentNode;
					bVar1 = ((Object)x == null);
					if (bVar1) break;
					pGVar2 = pGVar2._parentNode;
					if (pGVar2 == null) {
						throw new NullReferenceException();
					}
				}
				local_48._root_5__2 = pGVar2;
				pGVar2 = local_48._root_5__2;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				if (pGVar2._isRefreshScheduled != false) goto label_05315ed5;
				pGVar2._isRefreshScheduled = true;
				local_3c[1] = 0;
				local_3c[2] = 0;
				local_28 = &local_48;
				this = local_48;
				if (local_3c[0] == 0) goto label_05315da3;
				local_50[0] = Task.Yield();
				local_58[0] = (YieldAwaitable.YieldAwaiter)local_50.GetAwaiter();
				bVar1 = local_58.IsCompleted;
				if (bVar1) goto label_05315dbc;
				local_3c[0] = 0;
				local_48.__1__state = 0;
				local_48._tail[0] = (uint8_t)local_58[0];
				(local_48.__t__builder).AwaitUnsafeOnCompleted<YieldAwaitable.YieldAwaiter, FlexLayout._RefreshRootLayout_d__155>(local_58, local_48);
				iVar3 = 7;
			}
			if (local_3c[0] < 0) {
				pGVar2 = local_48._root_5__2;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				pGVar2._isRefreshScheduled = false;
			}
			if ((iVar3 != 0) && (iVar3 != 9)) {
				return;
			}
		label_05315ed5: ;
			local_48.__1__state = -2;
			local_48._root_5__2 = null;
			(local_48.__t__builder).SetResult();
			return;
		}

		[Token(Token = "0x6000060")]
		[Address(RVA = "0x5216040", Offset = "0x5215040", VA = "0x5216040", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout.<RefreshRootLayout>d__155$$SetStateMachine): clean
			(this.__t__builder).SetStateMachine(stateMachine);
			return;
		}
	}

	[Token(Token = "0x4000001")]
	public const DrivenTransformProperties DrivenRectTransformProperties = DrivenTransformProperties.Anchors | DrivenTransformProperties.AnchoredPosition | DrivenTransformProperties.SizeDelta;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private FlexLayoutConfig _configuration;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PositionType _positionType;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private YGValue _positionLeft;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	private YGValue _positionTop;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private YGValue _positionRight;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private YGValue _positionBottom;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private Direction _direction;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private FlexDirection _flexDirection;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	[SerializeField]
	private Wrap _flexWrap;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private YGValue _flexBasis;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Min(0f)]
	private float _flexGrow;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Min(0f)]
	private float _flexShrink;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private Justify _justifyContent;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private Align _alignItems;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Align _alignSelf;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Align _alignContent;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	private YGValue _width;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private YGValue _height;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private YGValue _minWidth;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	private YGValue _minHeight;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private YGValue _maxWidth;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private YGValue _maxHeight;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private YGValue _aspectRatio;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private YGValue _marginLeft;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private YGValue _marginTop;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private YGValue _marginRight;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private YGValue _marginBottom;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private YGValue _paddingLeft;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private YGValue _paddingTop;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private YGValue _paddingRight;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private YGValue _paddingBottom;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[SerializeField]
	[Min(0f)]
	private float _gapColumn;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	[SerializeField]
	[Min(0f)]
	private float _gapRow;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private YGNode _layoutNode;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FlexLayout _parentNode;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	internal readonly List<FlexLayout> _childrenNodes;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private DrivenRectTransformTracker _drivenRectTransformTracker;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x111")]
	private bool _isRefreshScheduled;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private RectTransform _rectTransform;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IntPtr RectTransformMeasureFuncPtr;

	[Token(Token = "0x17000001")]
	public bool IsRootLayoutNode
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x520EAE0", Offset = "0x520DAE0", VA = "0x520EAE0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_IsRootLayoutNode): clean
			FlexLayout x;
			bool bVar1;

			x = this._parentNode;
			bVar1 = ((Object)x == null);
			return bVar1;
		}
	}

	[Token(Token = "0x17000002")]
	public FlexLayout RootLayoutNode
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x520EB30", Offset = "0x520DB30", VA = "0x520EB30")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_RootLayoutNode): clean
			FlexLayout x;
			bool bVar1;

			if (__this != null) {
				do {
					x = __this._parentNode;
					bVar1 = ((Object)x == null);
					if (bVar1) {
						return __this;
					}
					__this = __this._parentNode;
				} while (__this != null);
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000003")]
	public FlexLayout ParentLayoutNode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x520EBB0", Offset = "0x520DBB0", VA = "0x520EBB0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_ParentLayoutNode): clean
			return this._parentNode;
		}
	}

	[Token(Token = "0x17000004")]
	public RectTransform RectTransform
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x520EBC0", Offset = "0x520DBC0", VA = "0x520EBC0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_RectTransform): 3 lines keep C-only constructs
			RectTransform* targetAddress;
			RectTransform pUVar1;
			bool bVar2;
			RectTransform pUVar3;

			pUVar3 = this._rectTransform;
			targetAddress = &this._rectTransform;
			bVar2 = ((bool)(Object)pUVar3);
			if (!bVar2) {
				pUVar3 = (RectTransform)this.transform;
				pUVar1 = typeof(RectTransform);
				if (pUVar3 == null) {
					*targetAddress = null;
				}
				else if ((pUVar3.klass != typeof(RectTransform)) ||(*targetAddress = pUVar3, pUVar3.klass != pUVar1)) {
					throw new InvalidCastException();
				}
			}
			return *targetAddress;
		}
	}

	[Token(Token = "0x17000005")]
	public FlexLayoutConfig Configuration
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x520EC70", Offset = "0x520DC70", VA = "0x520EC70")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_Configuration): clean
			return this._configuration;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x520EC80", Offset = "0x520DC80", VA = "0x520EC80")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_Configuration): 19 lines keep C-only constructs
			bool bVar1;
			code *pcVar2;
			IntPtr iVar3;
			ulong extraout_RDX;
			MethodInfo pMVar4;
			byte[] auVar5 = new byte[16];
			FlexLayout.d__155<RefreshRootLayout> local_88;
			YGNode local_40;
			AsyncVoidMethodBuilder local_38;

			this._configuration = value;
			pMVar4 = null;
			bVar1 = ((bool)(Object)value);
			local_40._nodePtr = (intptr_t)this.LayoutNode;
			if (bVar1) {
				if (value == null) {
					throw new NullReferenceException();
				}
				pMVar4 = (MethodInfo)value._config._configPtr;
				auVar5._8_8_ = extraout_RDX;
				auVar5._0_8_ = pMVar4;
				if (pMVar4 == null) {
					if (value._isDefaultConfig == false) {
						pcVar2 = g_data_075425c0;
						if (g_data_075425c0 == null) {
							local_88._0_8_ = "flex-ui";
							local_88.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
							local_88.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfd10d9;
							local_88.__t__builder.m_coreState.m_defaultContextAction =(Action)0x10;
							local_88.__t__builder.m_task = (Task)0x200000000;
							local_88.__4__this =(FlexLayout)((ulong)local_88.__4__this._5_3_ << 0x28);
							pcVar2 = (code)il2cpp_runtime_helper_03123230(&local_88);
							g_data_075425c0 = pcVar2;
						}
					}
					else {
						pcVar2 = g_data_075425d0;
						if (g_data_075425d0 == null) {
							local_88._0_8_ = "flex-ui";
							local_88.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
							local_88.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe621e;
							local_88.__t__builder.m_coreState.m_defaultContextAction =(Action)0x17;
							local_88.__t__builder.m_task = (Task)0x200000000;
							local_88.__4__this =(FlexLayout)((ulong)local_88.__4__this._5_3_ << 0x28);
							pcVar2 = (code)il2cpp_runtime_helper_03123230(&local_88);
							g_data_075425d0 = pcVar2;
						}
					}
					iVar3 = (*pcVar2)();
					value._config._configPtr = iVar3;
					value.RefreshConfig();
					local_40.SetConfig((YGConfig)value._config._configPtr);
					goto joined_r0x0530edfa;
				}
			}
			else {
				if (g_data_075425d0 == null) {
					local_88._0_8_ = "flex-ui";
					local_88.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
					local_88.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe621e;
					local_88.__t__builder.m_coreState.m_defaultContextAction = (Action)0x17;
					local_88.__t__builder.m_task = (Task)0x200000000;
					local_88.__4__this =(FlexLayout)((ulong)local_88.__4__this._5_3_ << 0x28);
					g_data_075425d0 = (code)il2cpp_runtime_helper_03123230(&local_88);
				}
				auVar5 = (*g_data_075425d0)();
			}
			local_40.SetConfig((YGConfig)auVar5._0_8_);
		joined_r0x0530edfa: ;
			local_88._root_5__2 = null;
			local_88._tail[0] = 0;
			local_88._tail[1] = 0;
			local_88._tail[2] = 0;
			local_88._tail[3] = 0;
			local_88._tail[4] = 0;
			local_88._tail[5] = 0;
			local_88._tail[6] = 0;
			local_88._63_1_ = 0;
			local_88.__t__builder.m_task = null;
			local_88.__4__this = null;
			local_88.__t__builder.m_coreState.m_stateMachine =null;
			local_88.__t__builder.m_coreState.m_defaultContextAction = null;
			local_88._0_8_ = null;
			local_88.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_88.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_88.__t__builder.m_task = local_38.m_task;
			local_88.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_88.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_88.__4__this = this;
			local_88.__1__state = 0xffffffff;
			(((long)&local_88 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_88);
			return;
		}
	}

	[Token(Token = "0x17000006")]
	public PositionType PositionType
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x520F390", Offset = "0x520E390", VA = "0x520F390")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PositionType): clean
			return this._positionType;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x520F3A0", Offset = "0x520E3A0", VA = "0x520F3A0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PositionType): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._positionType = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426b0 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xff884c;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001f;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426b0 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426b0)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000007")]
	public YGValue PositionLeft
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x520F540", Offset = "0x520E540", VA = "0x520F540")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PositionLeft): clean
			return (YGValue)this._positionLeft;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x520F550", Offset = "0x520E550", VA = "0x520F550")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PositionLeft): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._positionLeft = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPosition(0, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000008")]
	public YGValue PositionTop
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x520F820", Offset = "0x520E820", VA = "0x520F820")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PositionTop): clean
			return (YGValue)this._positionTop;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x520F830", Offset = "0x520E830", VA = "0x520F830")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PositionTop): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._positionTop = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPosition(1, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000009")]
	public YGValue PositionRight
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x520F900", Offset = "0x520E900", VA = "0x520F900")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PositionRight): clean
			return (YGValue)this._positionRight;
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x520F910", Offset = "0x520E910", VA = "0x520F910")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PositionRight): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._positionRight = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPosition(2, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700000A")]
	public YGValue PositionBottom
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x520F9E0", Offset = "0x520E9E0", VA = "0x520F9E0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PositionBottom): clean
			return (YGValue)this._positionBottom;
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x520F9F0", Offset = "0x520E9F0", VA = "0x520F9F0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PositionBottom): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._positionBottom = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPosition(3, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700000B")]
	public Direction Direction
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x520FAC0", Offset = "0x520EAC0", VA = "0x520FAC0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_Direction): clean
			return this._direction;
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x520FAD0", Offset = "0x520EAD0", VA = "0x520FAD0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_Direction): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_38;

			this._direction = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542680 == null) {
				GStack_78._0_8_ = "flex-ui";
				GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfee953;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001c;
				GStack_78.__t__builder.m_task = (Task)0x200000000;
				GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 0xc);
				g_data_07542680 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
			}
			(*g_data_07542680)(GVar1._nodePtr);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78._0_8_ = null;
			GStack_78.__t__builder.m_synchronizationContext =null;
			SStack_38 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_38.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_38.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_38.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_38.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = 0xffffffff;
			(((long)&GStack_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x1700000C")]
	public FlexDirection FlexDirection
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x520FC70", Offset = "0x520EC70", VA = "0x520FC70")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_FlexDirection): clean
			return this._flexDirection;
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x520FC80", Offset = "0x520EC80", VA = "0x520FC80")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_FlexDirection): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._flexDirection = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542688 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfde264;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_00000020;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_07542688 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_07542688)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700000D")]
	public Wrap FlexWrap
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x520FE20", Offset = "0x520EE20", VA = "0x520FE20")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_FlexWrap): clean
			return this._flexWrap;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x520FE30", Offset = "0x520EE30", VA = "0x520FE30")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_FlexWrap): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._flexWrap = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426b8 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe0b9e;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001b;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426b8 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426b8)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700000E")]
	public YGValue FlexBasis
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x520FFD0", Offset = "0x520EFD0", VA = "0x520FFD0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_FlexBasis): clean
			return (YGValue)this._flexBasis;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x520FFE0", Offset = "0x520EFE0", VA = "0x520FFE0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_FlexBasis): 1 lines keep C-only constructs
			YGNode GStack_80;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_30;

			this._flexBasis = value;
			GStack_80 = this.LayoutNode;
			GStack_80.StyleSetFlexBasis(value);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78.__1__state = 0;
			GStack_78._pad_8[0] = 0;
			GStack_78._pad_8[1] = 0;
			GStack_78._pad_8[2] = 0;
			GStack_78._pad_8[3] = 0;
			GStack_78.__t__builder.m_synchronizationContext = null;
			SStack_30 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_30.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = -1;
			GStack_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x1700000F")]
	public float FlexGrow
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x52102C0", Offset = "0x520F2C0", VA = "0x52102C0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_FlexGrow): clean
			return this._flexGrow;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x52102D0", Offset = "0x520F2D0", VA = "0x52102D0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_FlexGrow): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._flexGrow = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426c0 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0x1000df8;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001b;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426c0 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426c0)(value,GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000010")]
	public float FlexShrink
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x5210490", Offset = "0x520F490", VA = "0x5210490")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_FlexShrink): clean
			return this._flexShrink;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x52104A0", Offset = "0x520F4A0", VA = "0x52104A0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_FlexShrink): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._flexShrink = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426c8 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xff4e1b;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001d;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426c8 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426c8)(value,GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000011")]
	public Justify JustifyContent
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x5210660", Offset = "0x520F660", VA = "0x5210660")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_JustifyContent): clean
			return this._justifyContent;
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x5210670", Offset = "0x520F670", VA = "0x5210670")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_JustifyContent): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._justifyContent = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542690 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xff2bfd;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_00000021;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_07542690 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_07542690)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000012")]
	public Align AlignItems
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x5210810", Offset = "0x520F810", VA = "0x5210810")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_AlignItems): clean
			return this._alignItems;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5210820", Offset = "0x520F820", VA = "0x5210820")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_AlignItems): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._alignItems = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426a0 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe2765;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001d;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426a0 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426a0)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000013")]
	public Align AlignSelf
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x52109C0", Offset = "0x520F9C0", VA = "0x52109C0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_AlignSelf): clean
			return this._alignSelf;
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x52109D0", Offset = "0x520F9D0", VA = "0x52109D0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_AlignSelf): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_38;

			this._alignSelf = value;
			GVar1 = this.LayoutNode;
			if (g_data_075426a8 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfcf091;
				local_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001c;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0xc);
				g_data_075426a8 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_075426a8)(GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_38 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_38.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_38.m_task;
			local_78.__t__builder.m_synchronizationContext = local_38.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_38.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000014")]
	public Align AlignContent
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5210B70", Offset = "0x520FB70", VA = "0x5210B70")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_AlignContent): clean
			return this._alignContent;
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5210B80", Offset = "0x520FB80", VA = "0x5210B80")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_AlignContent): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_38;

			this._alignContent = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542698 == null) {
				GStack_78._0_8_ = "flex-ui";
				GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xff2c1f;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001f;
				GStack_78.__t__builder.m_task = (Task)0x200000000;
				GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 0xc);
				g_data_07542698 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
			}
			(*g_data_07542698)(GVar1._nodePtr);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78._0_8_ = null;
			GStack_78.__t__builder.m_synchronizationContext =null;
			SStack_38 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_38.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_38.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_38.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_38.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = 0xffffffff;
			(((long)&GStack_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x17000015")]
	public YGValue Width
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5210D20", Offset = "0x520FD20", VA = "0x5210D20")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_Width): clean
			return (YGValue)this._width;
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x5210D30", Offset = "0x520FD30", VA = "0x5210D30")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_Width): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._width = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetWidth(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000016")]
	public YGValue Height
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5211010", Offset = "0x5210010", VA = "0x5211010")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_Height): clean
			return (YGValue)this._height;
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5211020", Offset = "0x5210020", VA = "0x5211020")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_Height): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._height = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetHeight(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000017")]
	public YGValue MinWidth
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5211300", Offset = "0x5210300", VA = "0x5211300")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MinWidth): clean
			return (YGValue)this._minWidth;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5211310", Offset = "0x5210310", VA = "0x5211310")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MinWidth): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._minWidth = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMinWidth(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000018")]
	public YGValue MinHeight
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x52115D0", Offset = "0x52105D0", VA = "0x52115D0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MinHeight): clean
			return (YGValue)this._minHeight;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x52115E0", Offset = "0x52105E0", VA = "0x52115E0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MinHeight): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._minHeight = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMinHeight(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000019")]
	public YGValue MaxWidth
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x52118A0", Offset = "0x52108A0", VA = "0x52118A0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MaxWidth): clean
			return (YGValue)this._maxWidth;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x52118B0", Offset = "0x52108B0", VA = "0x52118B0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MaxWidth): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._maxWidth = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMaxWidth(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700001A")]
	public YGValue MaxHeight
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x5211B70", Offset = "0x5210B70", VA = "0x5211B70")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MaxHeight): clean
			return (YGValue)this._maxHeight;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x5211B80", Offset = "0x5210B80", VA = "0x5211B80")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MaxHeight): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._maxHeight = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMaxHeight(value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700001B")]
	public YGValue AspectRatio
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5211E40", Offset = "0x5210E40", VA = "0x5211E40")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_AspectRatio): clean
			return (YGValue)this._aspectRatio;
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x5211E50", Offset = "0x5210E50", VA = "0x5211E50")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_AspectRatio): 8 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_30;

			this._aspectRatio = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542798 == null) {
				GStack_78._0_8_ = "flex-ui";
				GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0x1003050;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_0000001e;
				GStack_78.__t__builder.m_task = (Task)0x200000000;
				GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 0xc);
				g_data_07542798 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
			}
			(*g_data_07542798)(value.Value,GVar1._nodePtr);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78._0_8_ = null;
			GStack_78.__t__builder.m_synchronizationContext =null;
			SStack_30 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_30.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = 0xffffffff;
			(((long)&GStack_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x1700001C")]
	public YGValue MarginLeft
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x5212010", Offset = "0x5211010", VA = "0x5212010")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MarginLeft): clean
			return (YGValue)this._marginLeft;
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5212020", Offset = "0x5211020", VA = "0x5212020")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MarginLeft): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._marginLeft = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMargin(0, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700001D")]
	public YGValue MarginTop
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5212300", Offset = "0x5211300", VA = "0x5212300")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MarginTop): clean
			return (YGValue)this._marginTop;
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x5212310", Offset = "0x5211310", VA = "0x5212310")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MarginTop): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._marginTop = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetMargin(1, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x1700001E")]
	public YGValue MarginRight
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x52123E0", Offset = "0x52113E0", VA = "0x52123E0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MarginRight): clean
			return (YGValue)this._marginRight;
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x52123F0", Offset = "0x52113F0", VA = "0x52123F0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MarginRight): 1 lines keep C-only constructs
			YGNode GStack_80;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_30;

			this._marginRight = value;
			GStack_80 = this.LayoutNode;
			GStack_80.StyleSetMargin(2, value);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78.__1__state = 0;
			GStack_78._pad_8[0] = 0;
			GStack_78._pad_8[1] = 0;
			GStack_78._pad_8[2] = 0;
			GStack_78._pad_8[3] = 0;
			GStack_78.__t__builder.m_synchronizationContext = null;
			SStack_30 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_30.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = -1;
			GStack_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x1700001F")]
	public YGValue MarginBottom
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x52124C0", Offset = "0x52114C0", VA = "0x52124C0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_MarginBottom): clean
			return (YGValue)this._marginBottom;
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x52124D0", Offset = "0x52114D0", VA = "0x52124D0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_MarginBottom): 1 lines keep C-only constructs
			YGNode GStack_80;
			FlexLayout.d__155<RefreshRootLayout> GStack_78;
			AsyncVoidMethodBuilder SStack_30;

			this._marginBottom = value;
			GStack_80 = this.LayoutNode;
			GStack_80.StyleSetMargin(3, value);
			GStack_78._root_5__2 = null;
			GStack_78._tail[0] = 0;
			GStack_78._tail[1] = 0;
			GStack_78._tail[2] = 0;
			GStack_78._tail[3] = 0;
			GStack_78._tail[4] = 0;
			GStack_78._tail[5] = 0;
			GStack_78._tail[6] = 0;
			GStack_78._63_1_ = 0;
			GStack_78.__t__builder.m_task = null;
			GStack_78.__4__this = null;
			GStack_78.__t__builder.m_coreState.m_stateMachine =null;
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
			GStack_78.__1__state = 0;
			GStack_78._pad_8[0] = 0;
			GStack_78._pad_8[1] = 0;
			GStack_78._pad_8[2] = 0;
			GStack_78._pad_8[3] = 0;
			GStack_78.__t__builder.m_synchronizationContext = null;
			SStack_30 = AsyncVoidMethodBuilder.Create();
			GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
			GStack_78.__t__builder.m_task = SStack_30.m_task;
			GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
			GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
			GStack_78.__4__this = this;
			GStack_78.__1__state = -1;
			GStack_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			return;
		}
	}

	[Token(Token = "0x17000020")]
	public YGValue PaddingLeft
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x52125A0", Offset = "0x52115A0", VA = "0x52125A0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PaddingLeft): clean
			return (YGValue)this._paddingLeft;
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x52125B0", Offset = "0x52115B0", VA = "0x52125B0")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PaddingLeft): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._paddingLeft = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPadding(0, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000021")]
	public YGValue PaddingTop
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5212880", Offset = "0x5211880", VA = "0x5212880")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PaddingTop): clean
			return (YGValue)this._paddingTop;
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5212890", Offset = "0x5211890", VA = "0x5212890")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PaddingTop): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._paddingTop = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPadding(1, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000022")]
	public YGValue PaddingRight
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5212960", Offset = "0x5211960", VA = "0x5212960")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PaddingRight): clean
			return (YGValue)this._paddingRight;
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x5212970", Offset = "0x5211970", VA = "0x5212970")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PaddingRight): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._paddingRight = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPadding(2, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000023")]
	public YGValue PaddingBottom
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5212A40", Offset = "0x5211A40", VA = "0x5212A40")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_PaddingBottom): clean
			return (YGValue)this._paddingBottom;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x5212A50", Offset = "0x5211A50", VA = "0x5212A50")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_PaddingBottom): 1 lines keep C-only constructs
			YGNode local_80;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._paddingBottom = value;
			local_80 = this.LayoutNode;
			local_80.StyleSetPadding(3, value);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78.__1__state = 0;
			local_78._pad_8[0] = 0;
			local_78._pad_8[1] = 0;
			local_78._pad_8[2] = 0;
			local_78._pad_8[3] = 0;
			local_78.__t__builder.m_synchronizationContext = null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = -1;
			local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000024")]
	public float GapColumn
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x5212B20", Offset = "0x5211B20", VA = "0x5212B20")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_GapColumn): clean
			return this._gapColumn;
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x5212B30", Offset = "0x5211B30", VA = "0x5212B30")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_GapColumn): 7 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._gapColumn = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542720 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe80d5;
				local_78.__t__builder.m_coreState.m_defaultContextAction = (Action)0x16;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0x10) ;
				g_data_07542720 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_07542720)(value,GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000025")]
	public float GapRow
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x5212CF0", Offset = "0x5211CF0", VA = "0x5212CF0")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_GapRow): clean
			return this._gapRow;
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x5212D00", Offset = "0x5211D00", VA = "0x5212D00")]
		set
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$set_GapRow): 7 lines keep C-only constructs
			YGNode GVar1;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			this._gapRow = value;
			GVar1 = this.LayoutNode;
			if (g_data_07542720 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe80d5;
				local_78.__t__builder.m_coreState.m_defaultContextAction = (Action)0x16;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this = (FlexLayout)CONCAT35(local_78.__4__this._5_3_, 0x10) ;
				g_data_07542720 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			(*g_data_07542720)(value,GVar1._nodePtr);
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return;
		}
	}

	[Token(Token = "0x17000026")]
	protected YGNode LayoutNode
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x520EF30", Offset = "0x520DF30", VA = "0x520EF30")]
		get
		{
			// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$get_LayoutNode): 6 lines keep C-only constructs
			YGNode GVar1;
			IntPtr iVar2;
			FlexLayout.d__155<RefreshRootLayout> local_78;
			AsyncVoidMethodBuilder local_30;

			GVar1._nodePtr = this._layoutNode._nodePtr;
			if (GVar1._nodePtr != 0) {
				return (YGNode)(YGNode)GVar1._nodePtr;
			}
			if (g_data_075425f0 == null) {
				local_78._0_8_ = "flex-ui";
				local_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				local_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfe429b;
				local_78.__t__builder.m_coreState.m_defaultContextAction = (Action)0xe;
				local_78.__t__builder.m_task = (Task)0x200000000;
				local_78.__4__this =(FlexLayout)((ulong)local_78.__4__this & 0xffffff0000000000);
				g_data_075425f0 = (code)il2cpp_runtime_helper_03123230(&local_78);
			}
			iVar2 = (*g_data_075425f0)();
			this._layoutNode._nodePtr = iVar2;
			this.UpdateNodeMeasure();
			this.UpdateNodeStyle();
			local_78._root_5__2 = null;
			local_78._tail[0] = 0;
			local_78._tail[1] = 0;
			local_78._tail[2] = 0;
			local_78._tail[3] = 0;
			local_78._tail[4] = 0;
			local_78._tail[5] = 0;
			local_78._tail[6] = 0;
			local_78._63_1_ = 0;
			local_78.__t__builder.m_task = null;
			local_78.__4__this = null;
			local_78.__t__builder.m_coreState.m_stateMachine =null;
			local_78.__t__builder.m_coreState.m_defaultContextAction = null;
			local_78._0_8_ = null;
			local_78.__t__builder.m_synchronizationContext =null;
			local_30 = AsyncVoidMethodBuilder.Create();
			local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
			local_78.__t__builder.m_task = local_30.m_task;
			local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
			local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
			local_78.__4__this = this;
			local_78.__1__state = 0xffffffff;
			(((long)&local_78 + 8U)).Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
			return (YGNode)(YGNode)this._layoutNode._nodePtr;
		}
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5213A30", Offset = "0x5212A30", VA = "0x5213A30", Slot = "5")]
	protected override void OnEnable()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnEnable): clean


		this.OnEnable();
		this.RefreshParent();
		this.RefreshChildren();
		return;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5213FC0", Offset = "0x5212FC0", VA = "0x5213FC0", Slot = "7")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnDisable): clean
		FlexLayout pGVar1;
		bool bVar2;

		this.OnDisable();
		pGVar1 = this._parentNode;
		bVar2 = ((bool)(Object)pGVar1);
		if (bVar2) {
			pGVar1 = this._parentNode;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.UntrackChild(this, true);
		}
		this.ClearTrackedChildren();
		return;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5214360", Offset = "0x5213360", VA = "0x5214360", Slot = "8")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnDestroy): 1 lines keep C-only constructs
		YGNode __this_00;

		this.OnDestroy();
		if (this._layoutNode._nodePtr != 0) {
			__this_00 = &this._layoutNode;
			__this_00.Free();
			__this_00._nodePtr = 0;
		}
		return;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x52143B0", Offset = "0x52133B0", VA = "0x52143B0", Slot = "12")]
	protected override void OnTransformParentChanged()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnTransformParentChanged): clean
		bool bVar1;

		this.OnTransformParentChanged();
		bVar1 = this.IsActive();
		if (bVar1) {
			this.RefreshParent();
			return;
		}
		return;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x52143E0", Offset = "0x52133E0", VA = "0x52143E0", Slot = "18")]
	protected virtual void OnTransformChildrenChanged()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnTransformChildrenChanged): clean
		bool bVar1;

		bVar1 = this.IsActive();
		if (bVar1) {
			this.ClearTrackedChildren();
			this.RefreshChildren();
			return;
		}
		return;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5214410", Offset = "0x5213410", VA = "0x5214410", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnRectTransformDimensionsChange): 19 lines keep C-only constructs
		FlexLayout x;
		AsyncVoidMethodBuilder __this_00;
		bool bVar1;
		sbyte cVar2;
		YGNode GVar3;
		FlexLayout.d__155<RefreshRootLayout> GStack_78;
		AsyncVoidMethodBuilder SStack_30;

		this.OnRectTransformDimensionsChange();
		bVar1 = this.IsActive();
		if (bVar1) {
			GVar3 = this.LayoutNode;
			if (g_data_07542648 == null) {
				GStack_78._0_8_ = "flex-ui";
				GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
				GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0x1000dc6;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_00000019;
				GStack_78.__t__builder.m_task = (Task)0x200000000;
				GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 8);
				g_data_07542648 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
				cVar2 = (*g_data_07542648)(GVar3._nodePtr);
			}
			else {
				cVar2 = (*g_data_07542648)(GVar3._nodePtr);
			}
			if (cVar2 == false) {
				x = this._parentNode;
				bVar1 = ((Object)x == null);
				if ((bVar1) && (this._isRefreshScheduled == false)) {
					this.RefreshLayout();
					return;
				}
			}
			else {
				GVar3 = this.LayoutNode;
				if (g_data_07542648 == null) {
					GStack_78._0_8_ = "flex-ui";
					GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
					GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0x1000dc6;
					GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_00000019;
					GStack_78.__t__builder.m_task = (Task)0x200000000;
					GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 8);
					g_data_07542648 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
				}
				cVar2 = (*g_data_07542648)(GVar3._nodePtr);
				if (cVar2 != false) {
					if (g_data_07542650 == null) {
						GStack_78._0_8_ = "flex-ui";
						GStack_78.__t__builder.m_synchronizationContext =(SynchronizationContext)0x7;
						GStack_78.__t__builder.m_coreState.m_stateMachine =(IAsyncStateMachine)0xfc45f4;
						GStack_78.__t__builder.m_coreState.m_defaultContextAction =(Action)&g_data_00000013;
						GStack_78.__t__builder.m_task = (Task)0x200000000;
						GStack_78.__4__this =(FlexLayout)CONCAT35(GStack_78.__4__this._5_3_, 8);
						g_data_07542650 = (code)il2cpp_runtime_helper_03123230(&GStack_78);
					}
					(*g_data_07542650)(GVar3._nodePtr);
				}
				GStack_78._root_5__2 = null;
				GStack_78._tail[0] = 0;
				GStack_78._tail[1] = 0;
				GStack_78._tail[2] = 0;
				GStack_78._tail[3] = 0;
				GStack_78._tail[4] = 0;
				GStack_78._tail[5] = 0;
				GStack_78._tail[6] = 0;
				GStack_78._63_1_ = 0;
				GStack_78.__t__builder.m_task = null;
				GStack_78.__4__this = null;
				GStack_78.__t__builder.m_coreState.m_stateMachine =null;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
				GStack_78._0_8_ = null;
				GStack_78.__t__builder.m_synchronizationContext =null;
				SStack_30 = AsyncVoidMethodBuilder.Create();
				__this_00 = &GStack_78.__t__builder;
				GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
				GStack_78.__t__builder.m_task = SStack_30.m_task;
				GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
				GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
				GStack_78.__4__this = this;
				GStack_78.__1__state = 0xffffffff;
				__this_00.Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
			}
		}
		return;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x520F2E0", Offset = "0x520E2E0", VA = "0x520F2E0")]
	[AsyncStateMachine(typeof(_003CRefreshRootLayout_003Ed__155))]
	public void RefreshRootLayout()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshRootLayout): 1 lines keep C-only constructs
		FlexLayout.d__155<RefreshRootLayout> GStack_78;
		AsyncVoidMethodBuilder SStack_30;

		GStack_78._root_5__2 = null;
		GStack_78._tail[0] = 0;
		GStack_78._tail[1] = 0;
		GStack_78._tail[2] = 0;
		GStack_78._tail[3] = 0;
		GStack_78._tail[4] = 0;
		GStack_78._tail[5] = 0;
		GStack_78._tail[6] = 0;
		GStack_78._63_1_ = 0;
		GStack_78.__t__builder.m_task = null;
		GStack_78.__4__this = null;
		GStack_78.__t__builder.m_coreState.m_stateMachine =null;
		GStack_78.__t__builder.m_coreState.m_defaultContextAction = null;
		GStack_78.__1__state = 0;
		GStack_78._pad_8[0] = 0;
		GStack_78._pad_8[1] = 0;
		GStack_78._pad_8[2] = 0;
		GStack_78._pad_8[3] = 0;
		GStack_78.__t__builder.m_synchronizationContext = null;
		SStack_30 = AsyncVoidMethodBuilder.Create();
		GStack_78.__t__builder.m_coreState.m_defaultContextAction = SStack_30.m_coreState.m_defaultContextAction;
		GStack_78.__t__builder.m_task = SStack_30.m_task;
		GStack_78.__t__builder.m_synchronizationContext = SStack_30.m_synchronizationContext;
		GStack_78.__t__builder.m_coreState.m_stateMachine = SStack_30.m_coreState.m_stateMachine;
		GStack_78.__4__this = this;
		GStack_78.__1__state = -1;
		GStack_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref GStack_78);
		return;
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5214AD0", Offset = "0x5213AD0", VA = "0x5214AD0")]
	[ContextMenu("Refresh Layout")]
	public void RefreshRootLayoutImmediate()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshRootLayoutImmediate): clean
		FlexLayout x;
		bool bVar1;

		if (this != null) {
			do {
				x = this._parentNode;
				bVar1 = ((Object)x == null);
				if (bVar1) {
					this.RefreshLayout();
					return;
				}
				this = this._parentNode;
			} while (this != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5214B50", Offset = "0x5213B50", VA = "0x5214B50", Slot = "17")]
	public int Compare(FlexLayout x, FlexLayout y)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$Compare): clean
		bool bVar1;
		int iVar2;
		RectTransform pUVar3;
		int local_1c;

		bVar1 = ((bool)(Object)x);
		iVar2 = -1;
		if (bVar1) {
			if (x == null) goto label_05314c20;
			pUVar3 = x.RectTransform;
			if (pUVar3 == null) goto label_05314c20;
			iVar2 = pUVar3.GetSiblingIndex();
		}
		local_1c = iVar2;
		bVar1 = ((bool)(Object)y);
		iVar2 = -1;
		if (bVar1) {
			if (y != null) {
				pUVar3 = y.RectTransform;
				if (pUVar3 != null) {
					iVar2 = pUVar3.GetSiblingIndex();
					goto label_05314c0a;
				}
			}
	label_05314c20: ;
			throw new NullReferenceException();
		}
	label_05314c0a: ;
		iVar2 = local_1c.CompareTo(iVar2);
		return iVar2;
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5214830", Offset = "0x5213830", VA = "0x5214830")]
	protected void RefreshLayout()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshLayout): 12 lines keep C-only constructs
		int iVar1;
		FlexLayout x;
		List<FlexLayout> __this_00;
		bool bVar2;
		RectTransform pUVar3;
		YGNode GVar4;
		uint uVar6;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Rect UVar7;
		YGNode local_90;
		System_Collections_Generic_List_Enumerator_T__o local_88;
		sbyte local_68;
		System_Collections_Generic_List_Enumerator_T__o local_60;
		sbyte local_58;
		byte[] local_38 = new byte[16];
		uint local_28;

		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		x = this._parentNode;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			pUVar3 = this.RectTransform;
			if (pUVar3 == null) goto label_05314a66;
			UVar7 = pUVar3.rect;
			local_38._8_4_ = in_XMM1_Dc;
			local_38._0_8_ = UVar7._8_8_;
			local_38._12_4_ = in_XMM1_Dd;
			GVar4 = this.LayoutNode;
			local_90 = GVar4;
			iVar1 = this._direction;
			uVar6 = local_38._4_4_;
			if (g_data_07542600 == null) {
				local_68 = "flex-ui";
				local_58 = "FlexUi_NodeCalculateLayout";
				local_28 = local_38._4_4_;
				g_data_07542600 = (code)il2cpp_runtime_helper_03123230(&local_68);
				uVar6 = local_28;
			}
			(*g_data_07542600)(local_38._0_4_,uVar6,GVar4._nodePtr,iVar1);
		}
		else {
			local_90 = this.LayoutNode;
			pUVar3 = this.RectTransform;
			local_90.ApplyTo(pUVar3);
		}
		__this_00 = this._childrenNodes;
		if (__this_00 != null) {
			local_88 = __this_00.GetEnumerator();
			local_68 = null;
			local_60 = &local_88;
			while(true) {
				bVar2 = local_88.MoveNext();
				if (!bVar2) {
					local_88.Dispose();
					return;
				}
				if ((FlexLayout)local_88._current == null) break;
				local_88._current.RefreshLayout();
			}
			throw new NullReferenceException();
		}
	label_05314a66: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x52130E0", Offset = "0x52120E0", VA = "0x52130E0")]
	protected void UpdateNodeStyle()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$UpdateNodeStyle): 45 lines keep C-only constructs
		int iVar1;
		FlexLayoutConfig pGVar2;
		bool bVar3;
		YGNode GVar4;
		IntPtr iVar5;
		MethodInfo in_RCX;
		ulong extraout_RDX;
		ulong extraout_RDX_00;
		MethodInfo method_07;
		float fVar6;
		byte[] auVar7 = new byte[16];
		sbyte local_60;
		sbyte local_50;
		float local_2c;
		YGNode local_28;

		GVar4 = this.LayoutNode;
		pGVar2 = this._configuration;
		local_28 = GVar4;
		bVar3 = ((bool)(Object)pGVar2);
		if (bVar3) {
			pGVar2 = this._configuration;
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			method_07 = (MethodInfo)pGVar2._config._configPtr;
			auVar7._8_8_ = extraout_RDX;
			auVar7._0_8_ = method_07;
			if (method_07 == null) {
				if (pGVar2._isDefaultConfig == false) {
					in_RCX = g_data_075425c0;
					if (g_data_075425c0 == null) {
						local_60 = "flex-ui";
						local_50 = "FlexUi_ConfigNew";
						in_RCX = (MethodInfo)il2cpp_runtime_helper_03123230(&local_60);
						g_data_075425c0 = in_RCX;
					}
				}
				else {
					in_RCX = g_data_075425d0;
					if (g_data_075425d0 == null) {
						local_60 = "flex-ui";
						local_50 = "FlexUi_ConfigGetDefault";
						in_RCX = (MethodInfo)il2cpp_runtime_helper_03123230(&local_60);
						g_data_075425d0 = in_RCX;
					}
				}
				iVar5 = (*(code)in_RCX)();
				pGVar2._config._configPtr = iVar5;
				pGVar2.RefreshConfig();
				auVar7._8_8_ = extraout_RDX_00;
				auVar7._0_8_ = pGVar2._config._configPtr;
			}
		}
		else {
			if (g_data_075425d0 == null) {
				local_60 = "flex-ui";
				local_50 = "FlexUi_ConfigGetDefault";
				g_data_075425d0 = (MethodInfo)il2cpp_runtime_helper_03123230(&local_60);
			}
			in_RCX = g_data_075425d0;
			auVar7 = (*(code)g_data_075425d0)();
		}
		local_28.SetConfig((YGConfig)auVar7._0_8_);
		if (g_data_075426b0 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetPositionType";
			g_data_075426b0 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_075426b0)(GVar4._nodePtr);
		local_28.StyleSetPosition(0, (YGValue)this._positionLeft);
		local_28.StyleSetPosition(1, (YGValue)this._positionTop);
		local_28.StyleSetPosition(2, (YGValue)this._positionRight);
		local_28.StyleSetPosition(3, (YGValue)this._positionBottom);
		iVar1 = this._direction;
		if (g_data_07542680 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetDirection";
			g_data_07542680 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_07542680)(GVar4._nodePtr,iVar1);
		iVar1 = this._flexDirection;
		if (g_data_07542688 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetFlexDirection";
			g_data_07542688 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_07542688)(GVar4._nodePtr,iVar1);
		iVar1 = this._flexWrap;
		if (g_data_075426b8 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetFlexWrap";
			g_data_075426b8 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_075426b8)(GVar4._nodePtr,iVar1);
		local_28.StyleSetFlexBasis((YGValue)this._flexBasis);
		fVar6 = this._flexGrow;
		if (g_data_075426c0 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetFlexGrow";
			local_2c = fVar6;
			g_data_075426c0 = (code)il2cpp_runtime_helper_03123230(&local_60);
			fVar6 = local_2c;
		}
		(*g_data_075426c0)(fVar6,GVar4._nodePtr);
		fVar6 = this._flexShrink;
		if (g_data_075426c8 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetFlexShrink";
			local_2c = fVar6;
			g_data_075426c8 = (code)il2cpp_runtime_helper_03123230(&local_60);
			fVar6 = local_2c;
		}
		(*g_data_075426c8)(fVar6,GVar4._nodePtr);
		iVar1 = this._justifyContent;
		if (g_data_07542690 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetJustifyContent";
			g_data_07542690 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_07542690)(GVar4._nodePtr,iVar1);
		iVar1 = this._alignItems;
		if (g_data_075426a0 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetAlignItems";
			g_data_075426a0 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_075426a0)(GVar4._nodePtr,iVar1);
		iVar1 = this._alignSelf;
		if (g_data_075426a8 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetAlignSelf";
			g_data_075426a8 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_075426a8)(GVar4._nodePtr,iVar1);
		iVar1 = this._alignContent;
		if (g_data_07542698 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetAlignContent";
			g_data_07542698 = (code)il2cpp_runtime_helper_03123230(&local_60);
		}
		(*g_data_07542698)(GVar4._nodePtr,iVar1);
		local_28.StyleSetWidth((YGValue)this._width);
		local_28.StyleSetHeight((YGValue)this._height);
		local_28.StyleSetMinWidth((YGValue)this._minWidth);
		local_28.StyleSetMinHeight((YGValue)this._minHeight);
		local_28.StyleSetMaxWidth((YGValue)this._maxWidth);
		local_28.StyleSetMaxHeight((YGValue)this._maxHeight);
		fVar6 = this._aspectRatio.Value;
		if (g_data_07542798 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetAspectRatio";
			local_2c = fVar6;
			g_data_07542798 = (code)il2cpp_runtime_helper_03123230(&local_60);
			fVar6 = local_2c;
		}
		(*g_data_07542798)(fVar6,GVar4._nodePtr);
		local_28.StyleSetMargin(0, (YGValue)this._marginLeft);
		local_28.StyleSetMargin(1, (YGValue)this._marginTop);
		local_28.StyleSetMargin(2, (YGValue)this._marginRight);
		local_28.StyleSetMargin(3, (YGValue)this._marginBottom);
		local_28.StyleSetPadding(0, (YGValue)this._paddingLeft);
		local_28.StyleSetPadding(1, (YGValue)this._paddingTop);
		local_28.StyleSetPadding(2, (YGValue)this._paddingRight);
		local_28.StyleSetPadding(3, (YGValue)this._paddingBottom);
		fVar6 = this._gapColumn;
		if (g_data_07542720 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetGap";
			local_2c = fVar6;
			g_data_07542720 = (code)il2cpp_runtime_helper_03123230(&local_60);
			fVar6 = local_2c;
		}
		(*g_data_07542720)(fVar6,GVar4._nodePtr,0);
		fVar6 = this._gapRow;
		if (g_data_07542720 == null) {
			local_60 = "flex-ui";
			local_50 = "FlexUi_NodeStyleSetGap";
			local_2c = fVar6;
			g_data_07542720 = (code)il2cpp_runtime_helper_03123230(&local_60);
			fVar6 = local_2c;
		}
		(*g_data_07542720)(fVar6,GVar4._nodePtr,1);
		return;
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x5212EC0", Offset = "0x5211EC0", VA = "0x5212EC0")]
	protected void UpdateNodeMeasure()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$UpdateNodeMeasure): 7 lines keep C-only constructs
		YGNode __this_00;
		bool bVar1;
		int iVar2;
		RectTransform value;
		MethodInfo method_01;
		IntPtr iVar3;
		IntPtr iVar4;
		sbyte local_50;
		sbyte local_40;
		Il2CppMethodPointer local_20;

		local_20 = (Il2CppMethodPointer)0x0;
		iVar4 = this._layoutNode._nodePtr;
		if (g_data_07542620 == null) {
			local_50 = "flex-ui";
			local_40 = "FlexUi_NodeGetChildCount";
			g_data_07542620 = (code)il2cpp_runtime_helper_03123230(&local_50);
		}
		__this_00 = &this._layoutNode;
		iVar2 = (*g_data_07542620)(iVar4);
		if (iVar2 == 0) {
			method_01 = (MethodInfo)&local_20;
			bVar1 = this.TryGetComponent<ILayoutElement>((object*)method_01);
			if (bVar1) {
				value = this.RectTransform;
				__this_00.SetContext<RectTransform>((object)value);
				iVar3 = FlexLayout.RectTransformMeasureFuncPtr;
				iVar4 = __this_00._nodePtr;
				if (g_data_07542640 == null) {
					local_50 = "flex-ui";
					local_40 = "FlexUi_NodeSetMeasureFunc";
					g_data_07542640 = (code)il2cpp_runtime_helper_03123230(&local_50);
				}
				goto label_053130ce;
			}
		}
		__this_00.SetContext((GCHandle)0x0);
		iVar4 = __this_00._nodePtr;
		if (g_data_07542640 == null) {
			local_50 = "flex-ui";
			local_40 = "FlexUi_NodeSetMeasureFunc";
			g_data_07542640 = (code)il2cpp_runtime_helper_03123230(&local_50);
		}
		iVar3 = 0;
	label_053130ce: ;
		(*g_data_07542640)(iVar4,iVar3);
		return;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x5213A50", Offset = "0x5212A50", VA = "0x5213A50")]
	protected void RefreshParent()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshParent): 5 lines keep C-only constructs
		FlexLayout* targetAddress;
		FlexLayout y;
		FlexLayout pGVar1;
		bool bVar2;
		RectTransform __this_00;
		Transform exists;
		FlexLayout local_28;

		local_28 = null;
		__this_00 = this.RectTransform;
		if (__this_00 == null) goto label_05313c49;
		exists = __this_00.parent;
		bVar2 = ((bool)(Object)exists);
		if (bVar2) {
			if (exists == null) goto label_05313c49;
			bVar2 = exists.TryGetComponent<FlexLayout>((object*)&local_28);
			if (bVar2) {
				if (local_28 == null) goto label_05313c49;
				bVar2 = local_28.IsActive();
				pGVar1 = local_28;
				if (bVar2) {
					y = this._parentNode;
					bVar2 = ((Object)pGVar1 != (Object)y);
					if (!bVar2) {
						return;
					}
					pGVar1 = this._parentNode;
					bVar2 = ((bool)(Object)pGVar1);
					if (bVar2) {
						pGVar1 = this._parentNode;
						if (pGVar1 == null) goto label_05313c49;
						pGVar1.UntrackChild(this, true);
					}
					if (local_28 != null) {
						local_28.TrackChild(this, true);
						return;
					}
					goto label_05313c49;
				}
			}
		}
		pGVar1 = this._parentNode;
		targetAddress = &this._parentNode;
		bVar2 = ((bool)(Object)pGVar1);
		if (bVar2) {
			if (*targetAddress == null) {
	label_05313c49: ;
				throw new NullReferenceException();
			}
			(*targetAddress).UntrackChild(this, true);
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5214050", Offset = "0x5213050", VA = "0x5214050")]
	protected void ClearParent()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$ClearParent): clean
		FlexLayout pGVar1;
		bool bVar2;

		pGVar1 = this._parentNode;
		bVar2 = ((bool)(Object)pGVar1);
		if (bVar2) {
			pGVar1 = this._parentNode;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.UntrackChild(this, true);
			return;
		}
		return;
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5213C50", Offset = "0x5212C50", VA = "0x5213C50")]
	protected void RefreshChildren()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshChildren): 11 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		RectTransform __this_00;
		VirtualInvokeData pVVar5;
		Component __this_01;
		object pIVar6;
		ulong uVar7;
		MethodInfo method_00;
		long lVar8;
		object pIStack_60;
		FlexLayout pGStack_58;
		object pIStack_50;
		object* ppIStack_40;
		object* ppIStack_38;

		pGStack_58 = null;
		pIStack_50 = null;
		__this_00 = this.RectTransform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pIStack_60 = (object)__this_00.GetEnumerator();
		ppIStack_40 = &pIStack_60;
		ppIStack_38 = &pIStack_50;
		if (pIStack_60 != null) {
			do {
				pIVar6 = pIStack_60;
				pIVar2 = pIStack_60.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				bVar4 = pIVar6.Dispose();
				pIVar6 = pIStack_60;
				if (!bVar4) {
					pIVar6 = (pIStack_60 as IDisposable);
					pIStack_50 = pIVar6;
					if (pIVar6 == null) goto label_05313f26;
					pIVar2 = pIVar6.klass;
					uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar7 == 0) goto label_05313eff;
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar8 = 0;
					goto label_05313ef0;
				}
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = pIStack_60.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				__this_01 = (Component)pIVar6.Dispose();
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||(method_00 = (MethodInfo)(__this_01.klass._2).typeHierarchy, *(Transform*)((long)method_00 + (ulong)bVar1 * 8 + -8) != typeof(Transform))) {
					throw new InvalidCastException();
				}
				bVar4 = __this_01.TryGetComponent<FlexLayout>((object*)&pGStack_58);
				if (bVar4) {
					if (pGStack_58 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pGStack_58.IsActive();
					if (bVar4) {
						this.TrackChild(pGStack_58, false);
					}
				}
			} while (pIStack_60 != null);
		}
		throw new NullReferenceException();
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
	label_05313ef0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05313f1d;
			}
		}
	label_05313eff: ;
	label_05313f1d: ;
		pIVar6.Dispose();
	label_05313f26: ;
		this.OnChildrenChanged();
		return;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5215130", Offset = "0x5214130", VA = "0x5215130")]
	protected void TrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$TrackChild): 2 lines keep C-only constructs
		List<FlexLayout> pSVar1;
		uint uVar2;
		YGNode in_RAX;
		YGNode child_00;
		YGNode local_28;

		local_28._nodePtr = in_RAX._nodePtr;
		if (child != null) {
			child._parentNode = this;
			pSVar1 = this._childrenNodes;
			if (pSVar1 != null) {
				child_00._nodePtr = (YGNode)(YGNode)child ;
				uVar2 = pSVar1.BinarySearch((object)child, (IComparer<T>)this);
				if ((int)uVar2 < 0) {
					pSVar1 = this._childrenNodes;
					if (pSVar1 == null) goto label_0531521c;
					uVar2 = ~uVar2;
					pSVar1.Insert(uVar2, (object)child);
					local_28 = this.LayoutNode;
					child_00 = child.LayoutNode;
					local_28.InsertChild(child_00, uVar2);
				}
				if (callChildrenChanged) {
					this.OnChildrenChanged();
					return;
				}
				return;
			}
		}
	label_0531521c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5215230", Offset = "0x5214230", VA = "0x5215230")]
	protected void UntrackChild(FlexLayout child, bool callChildrenChanged = true)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$UntrackChild): 2 lines keep C-only constructs
		List<FlexLayout> __this_00;
		YGNode GVar1;
		YGNode GVar2;
		sbyte local_58;
		sbyte local_48;

		if (child != null) {
			child._parentNode = null;
			GVar1 = this.LayoutNode;
			GVar2 = child.LayoutNode;
			if (g_data_07542610 == null) {
				local_58 = "flex-ui";
				local_48 = "FlexUi_NodeRemoveChild";
				g_data_07542610 = (code)il2cpp_runtime_helper_03123230(&local_58);
			}
			(*g_data_07542610)(GVar1._nodePtr,GVar2._nodePtr);
			__this_00 = this._childrenNodes;
			if (__this_00 != null) {
				__this_00.Remove((object)child);
				if (callChildrenChanged) {
					this.OnChildrenChanged();
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x52155E0", Offset = "0x52145E0", VA = "0x52155E0")]
	protected void RefreshDrivenRectTransformTracker()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RefreshDrivenRectTransformTracker): 3 lines keep C-only constructs
		DrivenRectTransformTracker __this_00;
		List<FlexLayout> __this_01;
		bool bVar1;
		RectTransform rectTransform;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = &this._drivenRectTransformTracker;
		__this_00.Clear();
		__this_01 = this._childrenNodes;
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_01.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				local_48.Dispose();
				return;
			}
			if ((FlexLayout)local_48._current == null) break;
			rectTransform = local_48._current.RectTransform;
			__this_00.Add((Object)this, rectTransform, 0x3f06);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x5215340", Offset = "0x5214340", VA = "0x5215340")]
	protected void OnChildrenChanged()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$OnChildrenChanged): 1 lines keep C-only constructs
		FlexLayout.d__155<RefreshRootLayout> local_78;
		AsyncVoidMethodBuilder local_30;

		this.RefreshDrivenRectTransformTracker();
		local_78._root_5__2 = null;
		local_78._tail[0] = 0;
		local_78._tail[1] = 0;
		local_78._tail[2] = 0;
		local_78._tail[3] = 0;
		local_78._tail[4] = 0;
		local_78._tail[5] = 0;
		local_78._tail[6] = 0;
		local_78._63_1_ = 0;
		local_78.__t__builder.m_task = null;
		local_78.__4__this = null;
		local_78.__t__builder.m_coreState.m_stateMachine =null;
		local_78.__t__builder.m_coreState.m_defaultContextAction = null;
		local_78.__1__state = 0;
		local_78._pad_8[0] = 0;
		local_78._pad_8[1] = 0;
		local_78._pad_8[2] = 0;
		local_78._pad_8[3] = 0;
		local_78.__t__builder.m_synchronizationContext = null;
		local_30 = AsyncVoidMethodBuilder.Create();
		local_78.__t__builder.m_coreState.m_defaultContextAction = local_30.m_coreState.m_defaultContextAction;
		local_78.__t__builder.m_task = local_30.m_task;
		local_78.__t__builder.m_synchronizationContext = local_30.m_synchronizationContext;
		local_78.__t__builder.m_coreState.m_stateMachine = local_30.m_coreState.m_stateMachine;
		local_78.__4__this = this;
		local_78.__1__state = -1;
		local_78.__t__builder.Start<FlexLayout._RefreshRootLayout_d__155>(ref local_78);
		return;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x52140D0", Offset = "0x52130D0", VA = "0x52140D0")]
	protected void ClearTrackedChildren()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$ClearTrackedChildren): 9 lines keep C-only constructs
		int piVar1;
		int length;
		List<FlexLayout> pSVar2;
		Object x;
		long lVar3;
		Object exists;
		bool bVar4;
		byte[] local_78 = new byte[8];
		System_Collections_Generic_List_Enumerator_object__o pSStack_70;
		Object local_68;
		byte[] local_48 = new byte[16];
		Object local_38;

		(this._drivenRectTransformTracker).Clear();
		pSVar2 = this._childrenNodes;
		if (pSVar2 != null) {
			local_78.GetEnumerator((List<object>)pSVar2);
			local_38 = local_68;
			local_48._0_8_ = local_78;
			local_48._8_8_ = pSStack_70;
			local_78 = (byte[])0x0;
			pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar4 = local_48.MoveNext();
				exists = local_38;
				if (!bVar4) break;
				bVar4 = ((bool)exists);
				if (bVar4) {
					if (exists == null) {
						throw new NullReferenceException();
					}
					x = (Object)(*(ulong)((sbyte)exists + 0x100));
					bVar4 = (x == (Object)this);
					if (bVar4) {
						(*(ulong)((sbyte)exists + 0x100)) = 0;
					}
				}
			}
			local_48.Dispose() ;
			pSVar2 = this._childrenNodes;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				lVar3 = this._layoutNode._nodePtr;
				if (lVar3 != 0) {
					if (g_data_07542618 == null) {
						local_78 = (byte[])0xfe0b86;
						pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o)0x7;
						local_68 = (Object)0xfc894f;
						g_data_07542618 = (code)il2cpp_runtime_helper_03123230(local_78);
					}
					(*g_data_07542618)(lVar3);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x520EA10", Offset = "0x520DA10", VA = "0x520EA10")]
	[MonoPInvokeCallback(typeof(Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc))]
	private static Vector2 RectTransformMeasureFunc(IntPtr nodePtr, float width, MeasureMode widthMode, float height, MeasureMode heightMode)
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$RectTransformMeasureFunc): clean
		Vector2 UVar1;
		RectTransform rect;
		float fVar2;
		YGNode local_30;
		float local_28;

		local_28 = height;
		local_30._nodePtr = (YGNode)(YGNode)nodePtr;
		rect = local_30.GetContext<RectTransform>();
		if (widthMode == 2) {
			fVar2 = LayoutUtility.GetPreferredWidth(rect);
			if (fVar2 <= width) {
				width = fVar2;
			}
		}
		else if (widthMode == 0) {
			width = LayoutUtility.GetPreferredWidth(rect);
		}
		if (heightMode == 2) {
			fVar2 = LayoutUtility.GetPreferredHeight(rect);
			if (fVar2 <= local_28) {
				local_28 = fVar2;
			}
		}
		else if (heightMode == 0) {
			local_28 = LayoutUtility.GetPreferredHeight(rect);
		}
		UVar1.y = local_28;
		UVar1.x = width;
		return (Vector2)UVar1;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x52157D0", Offset = "0x52147D0", VA = "0x52157D0")]
	public FlexLayout()
	{
		// Lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c (Gilzoide.FlexUi.FlexLayout$$.ctor): clean
		YGValue pGVar1;
		List<FlexLayout> __this_00;

		this._positionType = 1;
		pGVar1 = typeof(YGValue);
		this._positionLeft =(YGValue.Undefined);
		this._positionTop = (pGVar1.static_fields.Undefined);
		this._positionRight = (pGVar1.static_fields.Undefined);
		this._positionBottom = (pGVar1.static_fields.Undefined);
		this._flexDirection = 2;
		this._flexWrap = 1;
		this._flexBasis = (pGVar1.static_fields.Auto);
		this._flexShrink = 1.0;
		this._alignItems = 1;
		this._width = (pGVar1.static_fields.Auto);
		this._height = (pGVar1.static_fields.Auto);
		this._minWidth = (pGVar1.static_fields.Undefined);
		this._minHeight = (pGVar1.static_fields.Undefined);
		this._maxWidth = (pGVar1.static_fields.Undefined);
		this._maxHeight = (pGVar1.static_fields.Undefined);
		this._aspectRatio = (pGVar1.static_fields.Undefined);
		this._marginLeft = (pGVar1.static_fields.Zero);
		this._marginTop = (pGVar1.static_fields.Zero);
		this._marginRight = (pGVar1.static_fields.Zero);
		this._marginBottom = (pGVar1.static_fields.Zero);
		this._paddingLeft = (pGVar1.static_fields.Zero);
		this._paddingTop = (pGVar1.static_fields.Zero);
		this._paddingRight = (pGVar1.static_fields.Zero);
		this._paddingBottom = (pGVar1.static_fields.Zero);
		__this_00 = new List<FlexLayout>();
		this._childrenNodes = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gilzoide/FlexUi/FlexLayout.c.

	// Gilzoide.FlexUi.FlexLayout$$.cctor: 6 lines keep C-only constructs
	static FlexLayout()
	{
		byte uVar1;
		MethodInfo pMVar2;
		sbyte cVar3;
		Yoga.YGMeasureFunc d;
		byte puVar4;
		IntPtr iVar5;
		object ex;

		pMVar2 = MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc;
		d.method_ptr =(intptr_t)MethodInfo_Gilzoide_FlexUi_FlexLayout_RectTransformMeasureFunc.virtualMethodPointer;
		d.method = (intptr_t)pMVar2;
		d.m_target = null;
		uVar1 = pMVar2.parameters_count;
		d.method_code = (intptr_t)d;
		cVar3 = il2cpp_runtime_helper_030d61c0();
		if (cVar3 == false) {
			ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
			throw ex;
		}
		if (uVar1 == 5) {
			puVar4 = &label_02d49c90;
		}
		else {
			puVar4 = (byte)d.method_ptr;
			d.method_code = (intptr_t)d.m_target;
		}
		d.invoke_impl = (intptr_t)puVar4;
		d.extra_arg = (intptr_t)&label_02d49c00;
		iVar5 = Marshal.GetFunctionPointerForDelegate<Yoga.YGMeasureFunc>((object)d);
		FlexLayout.RectTransformMeasureFuncPtr = iVar5;
		return;
	}
}
