// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgQuickPlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C2")]
internal sealed class AottgQuickPlay : MonoBehaviour
{
	[Token(Token = "0x20002C3")]
	private sealed class RegionPing
	{
		[Token(Token = "0x4000E12")]
		[FieldOffset(Offset = "0x10")]
		public readonly AottgServerRegion Region;

		[Token(Token = "0x4000E13")]
		[FieldOffset(Offset = "0x48")]
		private readonly Region _photonRegion;

		[Token(Token = "0x4000E14")]
		[FieldOffset(Offset = "0x50")]
		private readonly RegionPinger _pinger;

		[Token(Token = "0x170001DD")]
		public int Ms
		{
			[Token(Token = "0x60010CD")]
			[Address(RVA = "0x57C9CE0", Offset = "0x57C8CE0", VA = "0x57C9CE0")]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$get_Ms): clean
				Region pPVar1;

				pPVar1 = this._photonRegion;
				if (pPVar1 == null) {
					throw new NullReferenceException();
				}
				return pPVar1._Ping_k__BackingField;
			}
		}

		[Token(Token = "0x170001DE")]
		public bool Done
		{
			[Token(Token = "0x60010CE")]
			[Address(RVA = "0x57C9D00", Offset = "0x57C8D00", VA = "0x57C9D00")]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$get_Done): clean
				RegionPinger pPVar1;

				pPVar1 = this._pinger;
				if (pPVar1 == null) {
					throw new NullReferenceException();
				}
				return pPVar1._Done_k__BackingField;
			}
		}

		[Token(Token = "0x60010CC")]
		[Address(RVA = "0x57C8FC0", Offset = "0x57C7FC0", VA = "0x57C8FC0")]
		public RegionPing(AottgServerRegion region, Region photonRegion, RegionPinger pinger)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.RegionPing$$.ctor): 3 lines keep C-only constructs
			AottgServerRegion pGVar1;

			base();
			this.Region.LabelPoint = region.LabelPoint;
			pGVar1 = &this.Region;
			pGVar1.MaskArea.m_XMin = region.MaskArea.m_XMin;
			pGVar1.MaskArea.m_YMin = region.MaskArea.m_YMin;
			pGVar1 = &this.Region;
			pGVar1.MaskArea.m_Width = region.MaskArea.m_Width;
			pGVar1.MaskArea.m_Height = region.MaskArea.m_Height;
			this.Region.Region = region.Region;
			*(uint)&this.Region.field_0x14 = region._20_4_;
			this.Region.MaskSprite = region.MaskSprite;
			this.Region.Id = region.Id;
			this.Region.Label = region.Label;
			this._photonRegion = photonRegion;
			this._pinger = pinger;
			return;
		}
	}

	[Token(Token = "0x20002C5")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass26_0
	{
		[Token(Token = "0x4000E1C")]
		[FieldOffset(Offset = "0x10")]
		public bool inLobby;

		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x57C9F40", Offset = "0x57C8F40", VA = "0x57C9F40")]
		public _003C_003Ec__DisplayClass26_0()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x57C9F50", Offset = "0x57C8F50", VA = "0x57C9F50")]
		internal void _003CQuickPlay_003Eb__0(bool result)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_0$$<QuickPlay>b__0): clean
			this.inLobby = result;
			return;
		}
	}

	[Token(Token = "0x20002C6")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass26_1
	{
		[Token(Token = "0x4000E1D")]
		[FieldOffset(Offset = "0x10")]
		public bool joined;

		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x57C9F60", Offset = "0x57C8F60", VA = "0x57C9F60")]
		public _003C_003Ec__DisplayClass26_1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_1$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x57C9F70", Offset = "0x57C8F70", VA = "0x57C9F70")]
		internal void _003CQuickPlay_003Eb__1(bool result)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass26_1$$<QuickPlay>b__1): clean
			this.joined = result;
			return;
		}
	}

	[Token(Token = "0x20002C7")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass28_0
	{
		[Token(Token = "0x4000E1E")]
		[FieldOffset(Offset = "0x10")]
		public List<RegionPing> reachable;

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x57C9F80", Offset = "0x57C8F80", VA = "0x57C9F80")]
		public _003C_003Ec__DisplayClass28_0()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass28_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x57C9F90", Offset = "0x57C8F90", VA = "0x57C9F90")]
		internal bool _003CFindNearbyRegions_003Eb__0(RegionPing ping)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass28_0$$<FindNearbyRegions>b__0): clean
			List<AottgQuickPlay.RegionPing> __this_00;
			Region pPVar1;
			AottgQuickPlay.RegionPing pGVar2;

			__this_00 = this.reachable;
			if (__this_00 != null) {
				pGVar2 = (AottgQuickPlay.RegionPing)__this_00.get_Item(0);
				if (pGVar2 == ping) {
					return true;
				}
				if ((ping != null) &&(pPVar1 = ping._photonRegion, pPVar1 != null)) {
					return pPVar1._Ping_k__BackingField < 0x97;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x20002CA")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass38_0
	{
		[Token(Token = "0x4000E22")]
		[FieldOffset(Offset = "0x10")]
		public bool inLobby;

		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x57CA3E0", Offset = "0x57C93E0", VA = "0x57CA3E0")]
		public _003C_003Ec__DisplayClass38_0()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass38_0$$.ctor): clean
			base();
			return;
		}

		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x57CA3F0", Offset = "0x57C93F0", VA = "0x57CA3F0")]
		internal void _003CHost_003Eb__0(bool result)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass38_0$$<Host>b__0): clean
			this.inLobby = result;
			return;
		}
	}

	[Token(Token = "0x20002CB")]
	[CompilerGenerated]
	private sealed class _003CConnectToLobby_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E23")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E24")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E25")]
		[FieldOffset(Offset = "0x20")]
		public MultiplayerRegion region;

		[Token(Token = "0x4000E26")]
		[FieldOffset(Offset = "0x28")]
		public Action<bool> done;

		[Token(Token = "0x4000E27")]
		[FieldOffset(Offset = "0x30")]
		private float _003Cdeadline_003E5__2;

		[Token(Token = "0x170001DF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010E6")]
			[Address(RVA = "0x57CA600", Offset = "0x57C9600", VA = "0x57CA600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001E0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010E8")]
			[Address(RVA = "0x57CA650", Offset = "0x57C9650", VA = "0x57CA650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x57C93B0", Offset = "0x57C83B0", VA = "0x57C93B0")]
		[DebuggerHidden]
		public _003CConnectToLobby_003Ed__34(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x57CA400", Offset = "0x57C9400", VA = "0x57CA400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x57CA410", Offset = "0x57C9410", VA = "0x57CA410", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$MoveNext): clean
			int iVar1;
			MultiplayerSettings pSVar2;
			Action<bool> pSVar3;
			bool bVar4;
			float fVar5;

			iVar1 = this.__1__state;
			if (iVar1 == 2) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 == 1) {
					this.__1__state = -1;
		label_058ca4dc: ;
					fVar5 = Time.unscaledTime;
					if (fVar5 < this._deadline_5__2) {
						if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
							bVar4 = PhotonNetwork.IsConnected;
							if (bVar4) goto label_058ca50b;
						}
						else {
							bVar4 = PhotonNetwork.IsConnected;
							if (bVar4) {
		label_058ca50b: ;
								this.__2__current = null;
								this.__1__state = 1;
								return true;
							}
						}
					}
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					fVar5 = Time.unscaledTime;
					this._deadline_5__2 = fVar5 + 12.0;
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						bVar4 = PhotonNetwork.IsConnected;
						if (bVar4) goto label_058ca4b8;
					}
					else {
						bVar4 = PhotonNetwork.IsConnected;
						if (bVar4) {
		label_058ca4b8: ;
							pSVar2 = SettingsManager.MultiplayerSettings;
							if (pSVar2 == null) goto label_058ca5f7;
							pSVar2.Disconnect();
							goto label_058ca4dc;
						}
					}
				}
				pSVar2 = SettingsManager.MultiplayerSettings;
				if (pSVar2 == null) goto label_058ca5f7;
				pSVar2.ConnectServer(this.region);
			}
			fVar5 = Time.unscaledTime;
			if (fVar5 < this._deadline_5__2) {
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					bVar4 = PhotonNetwork.InLobby;
				}
				else {
					bVar4 = PhotonNetwork.InLobby;
				}
				if (!bVar4) {
					this.__2__current = null;
					this.__1__state = 2;
					return true;
				}
			}
			pSVar3 = this.done;
			bVar4 = PhotonNetwork.InLobby;
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,bVar4,pSVar3.method);
				return false;
			}
		label_058ca5f7: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x57CA610", Offset = "0x57C9610", VA = "0x57CA610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<ConnectToLobby>d__34$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_ConnectToLobby_d__34_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002CC")]
	[CompilerGenerated]
	private sealed class _003CFindNearbyRegions_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E28")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E29")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E2A")]
		[FieldOffset(Offset = "0x20")]
		private _003C_003Ec__DisplayClass28_0 _003C_003E8__1;

		[Token(Token = "0x4000E2B")]
		[FieldOffset(Offset = "0x28")]
		public List<AottgServerRegion> regions;

		[Token(Token = "0x4000E2C")]
		[FieldOffset(Offset = "0x30")]
		private bool _003Ccached_003E5__2;

		[Token(Token = "0x170001E1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010EC")]
			[Address(RVA = "0x57CAB90", Offset = "0x57C9B90", VA = "0x57CAB90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001E2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010EE")]
			[Address(RVA = "0x57CABE0", Offset = "0x57C9BE0", VA = "0x57CABE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x57C8F90", Offset = "0x57C7F90", VA = "0x57C8F90")]
		[DebuggerHidden]
		public _003CFindNearbyRegions_003Ed__28(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x57CA660", Offset = "0x57C9660", VA = "0x57CA660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x57CA670", Offset = "0x57C9670", VA = "0x57CA670", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$MoveNext): 11 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			List<AottgServerRegion> __this_00;
			object @object;
			AottgQuickPlay.c__DisplayClass28_0 pGVar3;
			String pSVar4;
			AottgQuickPlay.d__31<WaitForPings> pGVar5;
			List<AottgQuickPlay.RegionPing> pSVar6;
			Func<AottgQuickPlay.RegionPing, bool> __this_01;
			System_Collections_Generic_IEnumerable_TSource__o source;
			Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields pGVar7;
			Func<T, TResult> __this_02;
			System_Collections_Generic_IEnumerable_TResult__o collection;
			Il2CppClass klass;
			float fVar9;

			iVar1 = this.__1__state;
			if (iVar1 == 2) {
				this.__1__state = -1;
				pGVar3 = this.__8__1;
				pSVar6 = AottgQuickPlay.Reachable();
				if (pGVar3 == null) goto label_058cab89;
				pGVar3.reachable = pSVar6;
				pGVar3 = this.__8__1;
				if (pGVar3 == null) goto label_058cab89;
			}
			else {
				if (iVar1 != 1) {
					if (iVar1 != 0) {
						return false;
					}
					this.__1__state = -1;
					pGVar3 = new AottgQuickPlay.c__DisplayClass28_0();
					this.__8__1 = pGVar3;
					pSVar4 = "FindingRegion";
					pSVar4 = String.Concat("MainMenu.QuickPlay.", pSVar4);
					pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
					AottgQuickPlay.Toast(2, "information", pSVar4);
					fVar9 = Time.unscaledTime;
					klass = typeof(AottgQuickPlay);
					fVar9 = fVar9 - AottgQuickPlay._pingStartedAt;
					this._cached_5__2 = fVar9 < 60.0;
					if (60.0 <= fVar9) {
						if ((((AottgQuickPlay)klass)._2).cctor_finished_or_no_cctor == 0) {
						}
						AottgQuickPlay.StartPings();
						uVar2 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
						klass = typeof(AottgQuickPlay);
					}
					else {
						uVar2 = (((AottgQuickPlay)klass)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					pGVar5 = new AottgQuickPlay.d__31<WaitForPings>();
					pGVar5.__1__state = 0;
					this.__2__current = (object)pGVar5;
					this.__1__state = 1;
					return true;
				}
				this.__1__state = -1;
				pGVar3 = this.__8__1;
				pSVar6 = AottgQuickPlay.Reachable();
				if (pGVar3 == null) goto label_058cab89;
				pGVar3.reachable = pSVar6;
				pGVar3 = this.__8__1;
				if ((pGVar3 == null) ||(pSVar6 = pGVar3.reachable, pSVar6 == null)) goto label_058cab89;
				if ((pSVar6._size == 0 & this._cached_5__2) != 0) {
					AottgQuickPlay.StartPings();
					pGVar5 = new AottgQuickPlay.d__31<WaitForPings>();
					pGVar5.__1__state = 0;
					this.__2__current = (object)pGVar5;
					this.__1__state = 2;
					return true;
				}
			}
			__this_00 = this.regions;
			pSVar6 = pGVar3.reachable;
			__this_01 = new Func<AottgQuickPlay.RegionPing, bool>((object)pGVar3, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass28_0_FindNearbyRegions_b__0);
			source = Enumerable.Where<AottgQuickPlay.RegionPing>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6, (System_Func_TSource__bool__o)__this_01) ;
			if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgQuickPlay.c).static_fields;
				__this_02 = (Func<T, TResult>)pGVar7.__9__28_1;
			}
			else {
				pGVar7 = typeof(AottgQuickPlay.c).static_fields;
				__this_02 = (Func<T, TResult>)pGVar7.__9__28_1;
			}
			if (__this_02 == null) {
				if (((typeof(AottgQuickPlay.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar7 = typeof(AottgQuickPlay.c).static_fields;
				}
				@object = (object)pGVar7.__9;
				__this_02 = new Func<AottgQuickPlay.RegionPing, AottgServerRegion>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_FindNearbyRegions_b__28_1);
				pGVar7 = typeof(AottgQuickPlay.c).static_fields;
				pGVar7.__9__28_1 = (Func<AottgQuickPlay.RegionPing, AottgServerRegion>)__this_02;
			}
			collection = Enumerable.Select<AottgQuickPlay.RegionPing, AottgServerRegion>(source, (System_Func_TSource__TResult__o)__this_02);
			if (__this_00 != null) {
				__this_00.AddRange((IEnumerable<T>)collection);
				return false;
			}
		label_058cab89: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x57CABA0", Offset = "0x57C9BA0", VA = "0x57CABA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<FindNearbyRegions>d__28$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_FindNearbyRegions_d__28_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002CD")]
	[CompilerGenerated]
	private sealed class _003CHost_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E2D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E2E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E2F")]
		[FieldOffset(Offset = "0x20")]
		public bool inRegionLobby;

		[Token(Token = "0x4000E30")]
		[FieldOffset(Offset = "0x24")]
		public MultiplayerRegion region;

		[Token(Token = "0x4000E31")]
		[FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass38_0 _003C_003E8__1;

		[Token(Token = "0x170001E3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010F2")]
			[Address(RVA = "0x57CB060", Offset = "0x57CA060", VA = "0x57CB060", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001E4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010F4")]
			[Address(RVA = "0x57CB0B0", Offset = "0x57CA0B0", VA = "0x57CB0B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60010EF")]
		[Address(RVA = "0x57C96D0", Offset = "0x57C86D0", VA = "0x57C96D0")]
		[DebuggerHidden]
		public _003CHost_003Ed__38(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60010F0")]
		[Address(RVA = "0x57CABF0", Offset = "0x57C9BF0", VA = "0x57CABF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60010F1")]
		[Address(RVA = "0x57CAC00", Offset = "0x57C9C00", VA = "0x57CAC00", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$MoveNext): 8 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			int iVar3;
			InGameSet pSVar4;
			MultiplayerSettings __this_00;
			bool bVar5;
			InGameSet pSVar6;
			String pSVar7;
			AottgQuickPlay.c__DisplayClass38_0 pGVar8;
			Action<bool> __this_01;
			AottgQuickPlay.d__34<ConnectToLobby> __this_02;
			Il2CppClass klass;
			AottgQuickPlay.c__DisplayClass38_0* targetAddress;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				pGVar8 = this.__8__1;
				if (pGVar8 == null) goto label_058cb051;
				if (pGVar8.inLobby == false) {
					pSVar7 = "ConnectFailed";
					if ((typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor == 0) {
						pSVar7 = "ConnectFailed";
					}
				}
				else {
					targetAddress = &this.__8__1;
					*targetAddress = null;
					uVar2 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
					klass = typeof(AottgQuickPlay);
		joined_r0x058cae71: ;
					typeof(AottgQuickPlay) = (AottgQuickPlay)klass;
					if (uVar2 == 0) {
					}
					pSVar6 = AottgQuickPlay.HostGame();
					uVar2 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
					if (pSVar6 != null) {
						if (uVar2 == 0) {
						}
						pSVar7 = "Hosting";
						pSVar7 = String.Concat("MainMenu.QuickPlay.", pSVar7);
						if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
						AottgQuickPlay.Toast(2, "information", pSVar7);
						pSVar4 = SettingsManager.InGameUI;
						if (pSVar4 != null) {
							pSVar4.Copy((BaseSetting)pSVar6);
							pSVar4 = SettingsManager.InGameCurrent;
							if (pSVar4 != null) {
								pSVar4.Copy((BaseSetting)pSVar6);
								MusicManager.PlayEffect();
								MusicManager.PlayTransition();
								__this_00 = SettingsManager.MultiplayerSettings;
								if (__this_00 != null) {
									__this_00.StartRoom();
									return false;
								}
							}
						}
						goto label_058cb051;
					}
					pSVar7 = "HostFailed";
					if (uVar2 == 0) {
						pSVar7 = "HostFailed";
					}
				}
				pSVar7 = String.Concat("MainMenu.QuickPlay.", pSVar7);
				bVar5 = false;
				pSVar7 = Aottg2GisketchLocale.Text(pSVar7);
				AottgQuickPlay.Fail(pSVar7);
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (this.inRegionLobby != false) {
					if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
						bVar5 = PhotonNetwork.InLobby;
					}
					else {
						bVar5 = PhotonNetwork.InLobby;
					}
					if (bVar5) {
						uVar2 = ((typeof(AottgQuickPlay))._2). cctor_finished_or_no_cctor;
						klass = typeof(AottgQuickPlay);
						goto joined_r0x058cae71;
					}
				}
				pGVar8 = new AottgQuickPlay.c__DisplayClass38_0();
				this.__8__1 = pGVar8;
				pGVar8 = this.__8__1;
				if (pGVar8 == null) {
		label_058cb051: ;
					throw new NullReferenceException();
				}
				pGVar8.inLobby = false;
				iVar3 = this.region;
				__this_01 = new Action<bool>((object)pGVar8, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass38_0_Host_b__0);
				__this_02 = il2cpp_codegen_object_new(typeof(AottgQuickPlay.d__34<ConnectToLobby>)) ;
				__this_02 = new Object();
				__this_02.__1__state = 0;
				__this_02.region = iVar3;
				__this_02.done = __this_01;
				this.__2__current = (object)__this_02;
				this.__1__state = 1;
				bVar5 = true;
			}
			return bVar5;
		}

		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x57CB070", Offset = "0x57CA070", VA = "0x57CB070", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<Host>d__38$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_Host_d__38_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002CE")]
	[CompilerGenerated]
	private sealed class _003CQuickPlay_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E32")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E33")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E34")]
		[FieldOffset(Offset = "0x20")]
		private _003C_003Ec__DisplayClass26_0 _003C_003E8__1;

		[Token(Token = "0x4000E35")]
		[FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass26_1 _003C_003E8__2;

		[Token(Token = "0x4000E36")]
		[FieldOffset(Offset = "0x30")]
		public AottgQuickPlay _003C_003E4__this;

		[Token(Token = "0x4000E37")]
		[FieldOffset(Offset = "0x38")]
		private List<AottgServerRegion> _003Cregions_003E5__2;

		[Token(Token = "0x4000E38")]
		[FieldOffset(Offset = "0x40")]
		private MultiplayerRegion? _003ClobbyRegion_003E5__3;

		[Token(Token = "0x4000E39")]
		[FieldOffset(Offset = "0x48")]
		private List<AottgServerRegion>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000E3A")]
		[FieldOffset(Offset = "0x90")]
		private AottgServerRegion _003Cregion_003E5__5;

		[Token(Token = "0x4000E3B")]
		[FieldOffset(Offset = "0xC8")]
		private HashSet<string> _003Ctried_003E5__6;

		[Token(Token = "0x4000E3C")]
		[FieldOffset(Offset = "0xD0")]
		private int _003Cattempt_003E5__7;

		[Token(Token = "0x170001E5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010F9")]
			[Address(RVA = "0x57CC0A0", Offset = "0x57CB0A0", VA = "0x57CC0A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001E6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010FB")]
			[Address(RVA = "0x57CC0F0", Offset = "0x57CB0F0", VA = "0x57CC0F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60010F5")]
		[Address(RVA = "0x57C8F00", Offset = "0x57C7F00", VA = "0x57C8F00")]
		[DebuggerHidden]
		public _003CQuickPlay_003Ed__26(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x57CB0C0", Offset = "0x57CA0C0", VA = "0x57CB0C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.IDisposable.Dispose): clean
			uint uVar1;

			uVar1 = this.__1__state + 3;
			if ((7 < uVar1) || ((0xe1U >> (uVar1 & 0x1f) & 1) == 0)) {
				return;
			}
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x57CB120", Offset = "0x57CA120", VA = "0x57CB120", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$MoveNext): 65 lines keep C-only constructs
			int piVar1;
			System_Nullable_MultiplayerRegion__Fields pSVar2;
			uint uVar3;
			int iVar4;
			AottgQuickPlay pGVar5;
			AottgServerRegion[] pGVar6;
			HashSet<object> __this_00;
			MultiplayerSettings __this_01;
			List<AottgServerRegion> pSVar7;
			System_Nullable_MultiplayerRegion__Fields SVar8;
			String pSVar9;
			ulong uVar10;
			AottgServerRegion item;
			AottgServerRegion pGVar11;
			System_Collections_Generic_List_Enumerator_AottgServerRegion__o pSVar12;
			AottgServerRegion pGVar13;
			AottgServerRegion pGVar14;
			float fVar15;
			uint uVar16;
			bool bVar17;
			int iVar18;
			MethodInfo pMVar19;
			HashSet<string> pSVar20;
			RoomInfo room;
			String pSVar21;
			AottgQuickPlay.d__35<WaitForJoin> __this_02;
			AottgQuickPlay.c__DisplayClass26_1 pGVar22;
			AottgQuickPlay.d__33<WaitForRoomList> __this_03;
			AottgQuickPlay.c__DisplayClass26_0 pGVar23;
			String pSVar24;
			Action<bool> pSVar25;
			AottgQuickPlay.d__34<ConnectToLobby> __this_04;
			AottgQuickPlay.d__38<Host> __this_05;
			AottgQuickPlay.d__28<FindNearbyRegions> __this_06;
			AottgQuickPlay.c__DisplayClass26_1* targetAddress;
			AottgQuickPlay.d__26<QuickPlay> pGVar26;
			AottgQuickPlay.d__26<QuickPlay> pGStack_120;
			byte[] auStack_118 = new byte[32];
			String pSStack_f8;
			String pSStack_f0;
			Vector2 UStack_e8;
			Vector2 UStack_e0;
			AottgQuickPlay.d__26<QuickPlay>* ppGStack_c0;
			byte[] auStack_b8 = new byte[16];
			String pSStack_a8;
			String pSStack_a0;
			String pSStack_98;
			String pSStack_90;
			Vector2 UStack_88;
			Vector2 UStack_80;
			Vector2 UStack_78;
			System_Nullable_MultiplayerRegion__Fields SStack_68;
			System_Nullable_MultiplayerRegion__Fields SStack_60;
			Vector2 UStack_38;
			Vector2 UStack_30;

			pGStack_120 = this;
			UStack_38.x = 0.0;
			UStack_38.y = 0.0;
			UStack_30.x = 0.0;
			UStack_30.y = 0.0;
			SStack_68.hasValue = false;
			SStack_68._1_3_ = 0;
			SStack_68.value = 0;
			SStack_60.hasValue = false;
			SStack_60._1_3_ = 0;
			SStack_60.value = 0;
			ppGStack_c0 = &pGStack_120;
			uVar3 = this.__1__state;
			if (5 < uVar3) {
				return false;
			}
			pGVar5 = this.__4__this;
			switch(uVar3) {
			case 0:
				this.__1__state = -1;
				pMVar19 = new List<AottgServerRegion>();
				pGStack_120._regions_5__2 = (List<AottgServerRegion>)pMVar19;
				AottgQuickPlay.ChosenRegion((System_Nullable_AottgServerRegion__o)auStack_118);
				UStack_38 = UStack_e8;
				UStack_30 = UStack_e0;
				SStack_68.hasValue = (bool)auStack_118[0];
				SStack_68._1_3_ = auStack_118._1_3_;
				SStack_68.value = auStack_118._4_4_;
				SVar8 = SStack_68;
				SStack_60.hasValue = (bool)auStack_118[8];
				SStack_60._1_3_ = auStack_118._9_3_;
				SStack_60.value = auStack_118._12_4_;
				SStack_68.hasValue = auStack_118[0];
				pSVar7 = pGStack_120._regions_5__2;
				SStack_68 = SVar8;
				if (SStack_68.hasValue == false) {
					__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQuickPlay.d__28<FindNearbyRegions>));
					__this_06 = new Object();
					__this_06.__1__state = 0;
					__this_06.regions = pSVar7;
					pGStack_120.__2__current = (object)__this_06;
					pGStack_120.__1__state = 1;
					return true;
				}
				auStack_118.get_Value(ref SStack_68);
				pMVar19 = MethodInfo_System_Collections_Generic_List_AottgServerRegion_Add;
				UStack_88 = UStack_e8;
				pSStack_98 = pSStack_f8;
				pSStack_90 = pSStack_f0;
				pSStack_a8 = (String)auStack_118._16_8_;
				pSStack_a0 = (String)auStack_118._24_8_;
				auStack_b8._0_8_ = auStack_118._0_8_;
				auStack_b8._8_8_ = auStack_118._8_8_;
				if (pSVar7 == null) {
		label_058cbed0: ;
					throw new NullReferenceException();
				}
				piVar1 = &pSVar7._version;
				*piVar1 = *piVar1 + 1;
				pGVar6 = pSVar7._items;
				if (pGVar6 == null) goto label_058cbed0;
				uVar3 = pSVar7._size;
				if (uVar3 < (uint)pGVar6.Length) {
					pSVar7._size = uVar3 + 1;
					pGVar6[(int)uVar3].LabelPoint = UStack_e8;
					pGVar13 = &pGVar6[(int)uVar3];
					*(String*)&(pGVar13.MaskArea) = pSStack_f8;
					*(String*)&(pGVar13.MaskArea).m_Width = pSStack_f0;
					pGVar13 = &pGVar6[(int)uVar3];
					*(ulong)&pGVar13.Region = auStack_118._16_8_;
					pGVar13.MaskSprite = (String)auStack_118._24_8_;
					pSVar2 = (System_Nullable_MultiplayerRegion__Fields)(pGVar6.m_Items + (int)uVar3);
					pSVar2.hasValue = (bool)auStack_118[0];
					*(undefined3)&pSVar2.field_0x1 = auStack_118._1_3_;
					pSVar2.value = auStack_118._4_4_;
					pSVar2[1].hasValue = (bool)auStack_118[8];
					*(undefined3)&pSVar2[1].field_0x1 = auStack_118._9_3_;
					pSVar2[1].value = auStack_118._12_4_;
				}
				else {
					item.Label = (String)auStack_118._8_8_;
					item.Id = (String)auStack_118._0_8_;
					item._16_8_ = auStack_118._16_8_;
					item.MaskSprite = (String)auStack_118._24_8_;
					item.MaskArea._0_8_ = pSStack_f8;
					item.MaskArea._8_8_ = pSStack_f0;
					item.LabelPoint = UStack_e8;
					pSVar7.AddWithResize(item);
				}
				pSVar7 = pGStack_120._regions_5__2;
				this = pGStack_120;
				break;
			case 1:
				this.__1__state = -1;
				pSVar7 = this._regions_5__2;
				break;
			case 2:
				this.__1__state = -3;
				pGVar23 = this.__8__1;
				if (pGVar23 == null) {
					throw new NullReferenceException();
				}
				pGVar26 = this;
				if (pGVar23.inLobby != false) {
					auStack_118[0] = false;
					auStack_118._1_3_ = 0;
					auStack_118._4_4_ = 0;
					auStack_118 = new Nullable<Int32Enum>(this._region_5__5.Region);
					pGStack_120._lobbyRegion_5__3 =(System_Nullable_MultiplayerRegion__Fields)auStack_118._0_8_;
					pSVar20 = new HashSet<string>();
					pGStack_120._tried_5__6 = pSVar20;
					pGStack_120._attempt_5__7 = 0;
		label_058cb9a2: ;
					pGVar22 = new AottgQuickPlay.c__DisplayClass26_1();
					pGStack_120.__8__2 = pGVar22;
					__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQuickPlay.d__33<WaitForRoomList>));
					__this_03 = new Object();
					__this_03.__1__state = 0;
					pGStack_120.__2__current = (object)__this_03;
					pGStack_120.__1__state = 3;
					return true;
				}
				goto label_058cbaa9;
			case 3:
				this.__1__state = -3;
				pSVar20 = this._tried_5__6;
				room = AottgQuickPlay.PickRoom(pSVar20);
				if (room != null) {
					__this_00 = (HashSet<object>)pGStack_120._tried_5__6;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00.Add((object)room.name);
					pSVar24 = "Joining";
					pSVar24 = String.Concat("MainMenu.QuickPlay.", pSVar24);
					pMVar19 = null;
					pSVar24 = Aottg2GisketchLocale.Text(pSVar24);
					pSVar21 = AottgRoomList.RoomTitle(room);
					pSVar24 = String.Format(pSVar24, (object)pSVar21);
					AottgQuickPlay.Toast(2, "information", pSVar24);
					__this_01 = SettingsManager.MultiplayerSettings;
					pSVar24 = room.name;
					pSVar21 = PhotonExtensions.GetStringProperty(room, RoomProperty.Name, "");
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.JoinRoom(pSVar24, pSVar21, (String)**(ulong*)(g_data_07556758 + 0xb8));
					pGVar22 = pGStack_120.__8__2;
					if (pGVar22 == null) {
						throw new NullReferenceException();
					}
					pGVar22.joined = false;
					pSVar25 = new Action<bool>((object)pGVar22, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_1_QuickPlay_b__1);
					__this_02 = new AottgQuickPlay.d__35<WaitForJoin>();
					__this_02.__1__state = 0;
					__this_02.done = pSVar25;
					pGStack_120.__2__current = (object)__this_02;
					pGStack_120.__1__state = 4;
					return true;
				}
				goto label_058cba50;
			case 4:
				this.__1__state = -3;
				pGVar22 = this.__8__2;
				if (pGVar22 == null) {
					throw new NullReferenceException();
				}
				if (pGVar22.joined != false) {
					this.__1__state = -1;
					(this.__7__wrap3).Dispose();
					return false;
				}
				targetAddress = &this.__8__2;
				*targetAddress = null;
				iVar18 = pGStack_120._attempt_5__7 + 1;
				pGStack_120._attempt_5__7 = iVar18;
				if (iVar18 < 3) goto label_058cb9a2;
		label_058cba50: ;
				pGStack_120.__8__1 = null;
				pGStack_120._tried_5__6 = null;
				pGVar11 = &pGStack_120._region_5__5;
				pGVar11.MaskArea.m_XMin = 0.0;
				pGVar11.MaskArea.m_YMin = 0.0;
				pGVar11 = &pGStack_120._region_5__5;
				pGVar11.MaskArea.m_Width = 0.0;
				pGVar11.MaskArea.m_Height = 0.0;
				*(ulong)&pGStack_120._region_5__5.Region = 0;
				pGStack_120._region_5__5.MaskSprite = null;
				pGStack_120._region_5__5.Id = null;
				pGStack_120._region_5__5.Label = null;
				pGStack_120._region_5__5.LabelPoint = (Vector2)0x0;
				pGVar26 = pGStack_120;
				goto label_058cbaa9;
			case 5:
				this.__1__state = -1;
				return false;
			}
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			if (pSVar7._size == 0) {
				if (((typeof(AottgQuickPlay))._2).cctor_finished_or_no_cctor == 0) {
				}
				pSVar24 = "NoServer";
				pSVar24 = String.Concat("MainMenu.QuickPlay.", pSVar24);
				pMVar19 = null;
				pSVar24 = Aottg2GisketchLocale.Text(pSVar24);
				AottgQuickPlay.Fail(pSVar24);
				return false;
			}
			this._lobbyRegion_5__3 = (System_Nullable_MultiplayerRegion__Fields)0x0;
			auStack_b8.GetEnumerator(pSVar7) ;
			UStack_e8 = UStack_88;
			UStack_e0 = UStack_80;
			pSStack_f8 = pSStack_98;
			pSStack_f0 = pSStack_90;
			auStack_118._16_8_ = pSStack_a8;
			auStack_118._24_8_ = pSStack_a0;
			auStack_118._0_8_ = auStack_b8._0_8_;
			auStack_118._8_8_ = auStack_b8._8_8_;
			pGStack_120.__7__wrap3._current.LabelPoint = UStack_78;
			*(Vector2)&pGStack_120.__7__wrap3._current.MaskArea = UStack_88;
			*(Vector2)((long)&pGStack_120.__7__wrap3._current.MaskArea + 8) = UStack_80;
			*(String*)&pGStack_120.__7__wrap3._current.Region = pSStack_98;
			pGStack_120.__7__wrap3._current.MaskSprite = pSStack_90;
			pGStack_120.__7__wrap3._current.Id = pSStack_a8;
			pGStack_120.__7__wrap3._current.Label = pSStack_a0;
			pGStack_120.__7__wrap3._list = (List<T>)auStack_b8._0_8_;
			pGStack_120.__7__wrap3._index = auStack_b8._8_4_;
			pGStack_120.__7__wrap3._version = auStack_b8._12_4_;
			pGStack_120.__1__state = -3;
			pGVar26 = pGStack_120;
		label_058cbaa9: ;
			bVar17 = (pGVar26.__7__wrap3).MoveNext();
			pGVar26 = pGStack_120;
			if (bVar17) {
				pGStack_120._region_5__5.LabelPoint =pGStack_120.__7__wrap3._current.LabelPoint;
				pSVar24 = pGStack_120.__7__wrap3._current.Id;
				pSVar21 = pGStack_120.__7__wrap3._current.Label;
				pSVar12 = &pGStack_120.__7__wrap3;
				iVar4 = pSVar12._current.Region;
				uVar16 = *(uint)&pSVar12._current.field_0x14;
				pSVar9 = pGStack_120.__7__wrap3._current.MaskSprite;
				pGVar14 = &pGStack_120.__7__wrap3._current;
				fVar15 = pGVar14.MaskArea.m_YMin;
				uVar10 = *(ulong)((long)&pGStack_120.__7__wrap3._current.MaskArea + 8);
				pGVar11 = &pGStack_120._region_5__5;
				pGVar11.MaskArea.m_XMin = pGVar14.MaskArea.m_XMin;
				pGVar11.MaskArea.m_YMin = fVar15;
				*(ulong)&pGStack_120._region_5__5.MaskArea.m_Width = uVar10;
				pGStack_120._region_5__5.Region = iVar4;
				*(uint)&pGStack_120._region_5__5.field_0x14 = uVar16;
				pGStack_120._region_5__5.MaskSprite = pSVar9;
				pGStack_120._region_5__5.Id = pSVar24;
				pGStack_120._region_5__5.Label = pSVar21;
				pGVar23 = new AottgQuickPlay.c__DisplayClass26_0();
				pGStack_120.__8__1 = pGVar23;
				pSVar24 = "Searching";
				pSVar24 = String.Concat("MainMenu.QuickPlay.", pSVar24);
				pSVar24 = Aottg2GisketchLocale.Text(pSVar24);
				pSVar24 = String.Format(pSVar24, (object)pGStack_120._region_5__5.Label);
				AottgQuickPlay.Toast(2, "information", pSVar24);
				pGVar23 = pGStack_120.__8__1;
				if (pGVar23 == null) {
					throw new NullReferenceException();
				}
				pGVar23.inLobby = false;
				iVar4 = pGStack_120._region_5__5.Region;
				pSVar25 = new Action<bool>((object)pGVar23, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass26_0_QuickPlay_b__0);
				__this_04 = il2cpp_codegen_object_new(typeof(AottgQuickPlay.d__34<ConnectToLobby>)) ;
				__this_04 = new Object();
				__this_04.__1__state = 0;
				__this_04.region = iVar4;
				__this_04.done = pSVar25;
				pGStack_120.__2__current = (object)__this_04;
				pGStack_120.__1__state = 2;
			}
			else {
				pGVar26.__1__state = -1;
				(pGVar26.__7__wrap3).Dispose();
				pGVar11 = &pGStack_120.__7__wrap3._current;
				pGVar11.MaskArea.m_XMin = 0.0;
				pGVar11.MaskArea.m_YMin = 0.0;
				*(ulong)((long)&pGStack_120.__7__wrap3._current.MaskArea + 8) = 0;
				*(ulong)&pGStack_120.__7__wrap3._current.Region = 0;
				pGStack_120.__7__wrap3._current.MaskSprite = null;
				pGStack_120.__7__wrap3._current.Id = null;
				pGStack_120.__7__wrap3._current.Label = null;
				pGStack_120.__7__wrap3._list = null;
				pGStack_120.__7__wrap3._index = 0;
				pGStack_120.__7__wrap3._version = 0;
				pGStack_120.__7__wrap3._current.LabelPoint =(Vector2)0x0;
				pSVar7 = pGStack_120._regions_5__2;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				auStack_118.get_Item(pSVar7, 0);
				pSVar7 = pGStack_120._regions_5__2;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				uVar16 = auStack_118._16_4_;
				SVar8 = pGStack_120._lobbyRegion_5__3;
				auStack_118.get_Item(pSVar7, 0);
				if (pGVar5 == null) {
					throw new NullReferenceException();
				}
				bVar17 = auStack_118._16_4_ == SVar8.value;
				__this_05 = new AottgQuickPlay.d__38<Host>();
				__this_05.__1__state = 0;
				__this_05.region = uVar16;
				__this_05.inRegionLobby = SVar8.hasValue != false && bVar17;
				pGStack_120.__2__current = (object)__this_05;
				pGStack_120.__1__state = 5;
			}
			return true;
		}

		[Token(Token = "0x60010F8")]
		[Address(RVA = "0x57CC060", Offset = "0x57CB060", VA = "0x57CC060")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x57CC0B0", Offset = "0x57CB0B0", VA = "0x57CC0B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<QuickPlay>d__26$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_QuickPlay_d__26_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002CF")]
	[CompilerGenerated]
	private sealed class _003CRunQuickPlay_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E3D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E3E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E3F")]
		[FieldOffset(Offset = "0x20")]
		public AottgQuickPlay _003C_003E4__this;

		[Token(Token = "0x170001E7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010FF")]
			[Address(RVA = "0x57CC1E0", Offset = "0x57CB1E0", VA = "0x57CC1E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001E8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001101")]
			[Address(RVA = "0x57CC230", Offset = "0x57CB230", VA = "0x57CC230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x57C8E70", Offset = "0x57C7E70", VA = "0x57C8E70")]
		[DebuggerHidden]
		public _003CRunQuickPlay_003Ed__25(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x57CC100", Offset = "0x57CB100", VA = "0x57CC100", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60010FE")]
		[Address(RVA = "0x57CC110", Offset = "0x57CB110", VA = "0x57CC110", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$MoveNext): clean
			int iVar1;
			AottgQuickPlay pGVar2;
			AottgQuickPlay.d__26<QuickPlay> __this_00;

			iVar1 = this.__1__state;
			pGVar2 = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (pGVar2 == null) {
		label_058cc1d9: ;
					throw new NullReferenceException();
				}
				__this_00 = new AottgQuickPlay.d__26<QuickPlay>();
				__this_00.__1__state = 0;
				__this_00.__4__this = pGVar2;
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (pGVar2 == null) goto label_058cc1d9;
				pGVar2._routine = null;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6001100")]
		[Address(RVA = "0x57CC1F0", Offset = "0x57CB1F0", VA = "0x57CC1F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<RunQuickPlay>d__25$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_RunQuickPlay_d__25_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002D0")]
	[CompilerGenerated]
	private sealed class _003CWaitForJoin_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E40")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E41")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E42")]
		[FieldOffset(Offset = "0x20")]
		public Action<bool> done;

		[Token(Token = "0x4000E43")]
		[FieldOffset(Offset = "0x28")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x170001E9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001105")]
			[Address(RVA = "0x57CC410", Offset = "0x57CB410", VA = "0x57CC410", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001EA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001107")]
			[Address(RVA = "0x57CC460", Offset = "0x57CB460", VA = "0x57CC460", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001102")]
		[Address(RVA = "0x57C9440", Offset = "0x57C8440", VA = "0x57C9440")]
		[DebuggerHidden]
		public _003CWaitForJoin_003Ed__35(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001103")]
		[Address(RVA = "0x57CC240", Offset = "0x57CB240", VA = "0x57CC240", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001104")]
		[Address(RVA = "0x57CC250", Offset = "0x57CB250", VA = "0x57CC250", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$MoveNext): clean
			int iVar1;
			Action<bool> pSVar2;
			bool bVar3;
			uint uVar4;
			float fVar5;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				fVar5 = Time.unscaledTime;
				this._start_5__2 = fVar5;
			}
			fVar5 = Time.unscaledTime;
			if (this._start_5__2 + 8.0 <= fVar5) goto label_058cc39d;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = PhotonNetwork.InRoom;
			}
			else {
				bVar3 = PhotonNetwork.InRoom;
			}
			if (bVar3) goto label_058cc39d;
			fVar5 = Time.unscaledTime;
			if (fVar5 <= this._start_5__2 + 1.0) goto label_058cc3dd;
			if ((typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07545433 != false) goto label_058cc338;
		label_058cc363: ;
				Il2CppMethodInitialized_07545433 = true;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_058cc344;
		label_058cc382: ;
				uVar4 = PhotonNetwork.NetworkClientState;
			}
			else {
				if (Il2CppMethodInitialized_07545433 == false) goto label_058cc363;
		label_058cc338: ;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_058cc382;
		label_058cc344: ;
				uVar4 = PhotonNetwork.NetworkClientState;
			}
			if ((0xf < uVar4) || ((0xc010U >> (uVar4 & 0x1f) & 1) == 0)) {
		label_058cc3dd: ;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
		label_058cc39d: ;
			pSVar2 = this.done;
			bVar3 = PhotonNetwork.InRoom;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,bVar3,pSVar2.method);
			return false;
		}

		[Token(Token = "0x6001106")]
		[Address(RVA = "0x57CC420", Offset = "0x57CB420", VA = "0x57CC420", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForJoin>d__35$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForJoin_d__35_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002D1")]
	[CompilerGenerated]
	private sealed class _003CWaitForPings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E44")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E45")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E46")]
		[FieldOffset(Offset = "0x20")]
		private float _003CfirstDoneAt_003E5__2;

		[Token(Token = "0x170001EB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600110B")]
			[Address(RVA = "0x57CC6E0", Offset = "0x57CB6E0", VA = "0x57CC6E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001EC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600110D")]
			[Address(RVA = "0x57CC730", Offset = "0x57CB730", VA = "0x57CC730", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6001108")]
		[Address(RVA = "0x57C9080", Offset = "0x57C8080", VA = "0x57C9080")]
		[DebuggerHidden]
		public _003CWaitForPings_003Ed__31(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6001109")]
		[Address(RVA = "0x57CC470", Offset = "0x57CB470", VA = "0x57CC470", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600110A")]
		[Address(RVA = "0x57CC480", Offset = "0x57CB480", VA = "0x57CC480", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$MoveNext): 2 lines keep C-only constructs
			int iVar1;
			List<AottgQuickPlay.RegionPing> pSVar2;
			object @object;
			int iVar3;
			Gisketch_Aottg2UI_Game_AottgQuickPlay_StaticFields pGVar4;
			Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields pGVar5;
			Func<AottgQuickPlay.RegionPing, bool> __this_00;
			float fVar6;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._firstDoneAt_5__2 = -1.0;
			}
			fVar6 = Time.unscaledTime;
			pGVar4 = typeof(AottgQuickPlay).static_fields;
			if (fVar6 < pGVar4._pingStartedAt + 4.0) {
				if ((typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor == 0) {
					pGVar4 = typeof(AottgQuickPlay).static_fields;
				}
				pSVar2 = pGVar4.Pings;
				if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar5 = typeof(AottgQuickPlay.c).static_fields;
					__this_00 = pGVar5.__9__31_0;
				}
				else {
					pGVar5 = typeof(AottgQuickPlay.c).static_fields;
					__this_00 = pGVar5.__9__31_0;
				}
				if (__this_00 == null) {
					if (((typeof(AottgQuickPlay.c))._2).cctor_finished_or_no_cctor == 0) {
						pGVar5 = typeof(AottgQuickPlay.c).static_fields;
					}
					@object = (object)pGVar5.__9;
					__this_00 = new Func<AottgQuickPlay.RegionPing, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_WaitForPings_b__31_0);
					pGVar5 = typeof(AottgQuickPlay.c).static_fields;
					pGVar5.__9__31_0 = __this_00;
				}
				iVar3 = Enumerable.Count<AottgQuickPlay.RegionPing>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)__this_00);
				pSVar2 = AottgQuickPlay.Pings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				if (iVar3 != pSVar2._size) {
					fVar6 = this._firstDoneAt_5__2;
					if ((0 < iVar3) && (fVar6 < 0.0)) {
						fVar6 = Time.unscaledTime;
						this._firstDoneAt_5__2 = fVar6;
					}
					if ((0.0 <= fVar6) &&(fVar6 = Time.unscaledTime,this._firstDoneAt_5__2 + 0.75 < fVar6)) {
						return false;
					}
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			return false;
		}

		[Token(Token = "0x600110C")]
		[Address(RVA = "0x57CC6F0", Offset = "0x57CB6F0", VA = "0x57CC6F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForPings>d__31$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForPings_d__31_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20002D2")]
	[CompilerGenerated]
	private sealed class _003CWaitForRoomList_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E47")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E48")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E49")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cdeadline_003E5__2;

		[Token(Token = "0x170001ED")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001111")]
			[Address(RVA = "0x57CC860", Offset = "0x57CB860", VA = "0x57CC860", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001EE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001113")]
			[Address(RVA = "0x57CC8B0", Offset = "0x57CB8B0", VA = "0x57CC8B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600110E")]
		[Address(RVA = "0x57C9320", Offset = "0x57C8320", VA = "0x57C9320")]
		[DebuggerHidden]
		public _003CWaitForRoomList_003Ed__33(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600110F")]
		[Address(RVA = "0x57CC740", Offset = "0x57CB740", VA = "0x57CC740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6001110")]
		[Address(RVA = "0x57CC750", Offset = "0x57CB750", VA = "0x57CC750", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$MoveNext): clean
			sbyte cVar1;
			int iVar2;
			bool bVar3;
			float fVar4;

			iVar2 = this.__1__state;
			if (iVar2 == 1) {
				this.__1__state = -1;
		label_058cc7b7: ;
				fVar4 = Time.unscaledTime;
				if (this._deadline_5__2 <= fVar4) {
					return false;
				}
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = PhotonNetwork.InLobby;
					if (bVar3) goto label_058cc7ff;
				}
				else {
					bVar3 = PhotonNetwork.InLobby;
					if (bVar3) {
		label_058cc7ff: ;
						if ((typeof(MainMenuGameManager)._2).cctor_finished_or_no_cctor == 0) {
							cVar1 = MainMenuGameManager.RoomListReceived;
						}
						else {
							cVar1 = MainMenuGameManager.RoomListReceived;
						}
						if (cVar1 != false) goto label_058cc81f;
					}
				}
				this.__2__current = null;
				this.__1__state = 1;
				bVar3 = true;
			}
			else {
				if (iVar2 == 0) {
					this.__1__state = -1;
					fVar4 = Time.unscaledTime;
					this._deadline_5__2 = fVar4 + 1.5;
					goto label_058cc7b7;
				}
		label_058cc81f: ;
				bVar3 = false;
			}
			return bVar3;
		}

		[Token(Token = "0x6001112")]
		[Address(RVA = "0x57CC870", Offset = "0x57CB870", VA = "0x57CC870", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay.<WaitForRoomList>d__33$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_WaitForRoomList_d__33_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000DFF")]
	public const string TitleKey = "MainMenu.QuickPlay.Title";

	[Token(Token = "0x4000E00")]
	private const string Prefix = "MainMenu.QuickPlay.";

	[Token(Token = "0x4000E01")]
	private const string ToastKey = "multiplayer.quick-play";

	[Token(Token = "0x4000E02")]
	private const string HostRoomName = "FoodForTitan";

	[Token(Token = "0x4000E03")]
	private const string HostCategory = "Casual";

	[Token(Token = "0x4000E04")]
	private const string HostSubCategory = "VS Titans";

	[Token(Token = "0x4000E05")]
	private const string HostExperience = "Waves";

	[Token(Token = "0x4000E06")]
	private const int MaxJoinAttempts = 3;

	[Token(Token = "0x4000E07")]
	private const int NearbyRegionPingMs = 150;

	[Token(Token = "0x4000E08")]
	private const float PingTimeout = 4f;

	[Token(Token = "0x4000E09")]
	private const float PingGrace = 0.75f;

	[Token(Token = "0x4000E0A")]
	private const float PingCacheSeconds = 60f;

	[Token(Token = "0x4000E0B")]
	private const float LobbyTimeout = 12f;

	[Token(Token = "0x4000E0C")]
	private const float RoomListWait = 1.5f;

	[Token(Token = "0x4000E0D")]
	private const float JoinTimeout = 8f;

	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<RegionPing> Pings;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x8")]
	private static float _pingStartedAt;

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x10")]
	private static AottgQuickPlay _instance;

	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x20")]
	private Coroutine _routine;

	[Token(Token = "0x170001DC")]
	public static bool IsRunning
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0x57C82E0", Offset = "0x57C72E0", VA = "0x57C82E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$get_IsRunning): clean
			AottgQuickPlay pGVar1;
			bool bVar2;
			bool bVar3;

			pGVar1 = AottgQuickPlay._instance;
			bVar2 = ((Object)pGVar1 != null);
			if (bVar2) {
				pGVar1 = AottgQuickPlay._instance;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pGVar1._routine != null;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x57C83A0", Offset = "0x57C73A0", VA = "0x57C83A0")]
	public static void Prewarm()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Prewarm): 1 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		System_Nullable_AottgServerRegion__o local_48;

		if (Il2CppMethodInitialized_07545424 == false) {
			Il2CppMethodInitialized_07545424 = true;
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			local_48 = AottgQuickPlay.ChosenRegion();
		}
		else {
			local_48 = AottgQuickPlay.ChosenRegion();
		}
		if (local_48.hasValue == false) {
			if (((typeof(AottgQuickPlay))._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar2 = Time.unscaledTime;
			if (60.0 <= fVar2 - AottgQuickPlay._pingStartedAt) {
				if ((typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor == 0) {
					AottgQuickPlay.StartPings();
					return;
				}
				AottgQuickPlay.StartPings();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x57C8BF0", Offset = "0x57C7BF0", VA = "0x57C8BF0")]
	public static void Begin()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Begin): 1 lines keep C-only constructs
		AottgQuickPlay pGVar1;
		bool bVar3;
		GisketchUIRoot __this;
		GameObject __this_00;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545425 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_AottgQuickPlay) ;
			Il2CppMethodInitialized_07545425 = true;
		}
		pGVar1 = AottgQuickPlay._instance;
		method_00 = null;
		bVar3 = ((Object)pGVar1 == null);
		if (bVar3) {
			__this = AottgGisketchUiHost.Root;
			if (__this == null) goto label_058c8d01;
			__this_00 = __this.gameObject;
			if (__this_00 == null) goto label_058c8d01;
			method_00 = (MethodInfo)__this_00.AddComponent<AottgQuickPlay>();
			AottgQuickPlay._instance = (AottgQuickPlay)method_00;
		}
		pGVar1 = AottgQuickPlay._instance;
		if (pGVar1 != null) {
			pGVar1.Run();
			return;
		}
	label_058c8d01: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x57C7670", Offset = "0x57C6670", VA = "0x57C7670")]
	public static void Cancel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Cancel): clean
		bool bVar1;
		AottgQuickPlay pGVar2;

		pGVar2 = AottgQuickPlay._instance;
		bVar1 = ((Object)pGVar2 != null);
		if (!bVar1) {
			return;
		}
		pGVar2 = AottgQuickPlay._instance;
		if (pGVar2 != null) {
			if (pGVar2._routine == null) {
				return;
			}
			if ((typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = AottgQuickPlay._instance;
				if (pGVar2 == null) goto label_058c777d;
			}
			pGVar2.StopCoroutine(pGVar2._routine);
			pGVar2 = AottgQuickPlay._instance;
			if (pGVar2 != null) {
				pGVar2._routine = null;
				return;
			}
		}
	label_058c777d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x57C8D10", Offset = "0x57C7D10", VA = "0x57C8D10")]
	private void Run()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Run): 4 lines keep C-only constructs
		uint uVar1;
		AottgQuickPlay.d__25<RunQuickPlay> __this_00;
		Coroutine pUVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545427 == false) {
			Il2CppMethodInitialized_07545427 = true;
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgQuickPlay);
		}
		else {
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgQuickPlay);
		}
		typeof(AottgQuickPlay) = (AottgQuickPlay)klass;
		if (uVar1 == 0) {
			AottgQuickPlay.Cancel();
		}
		else {
			AottgQuickPlay.Cancel();
		}
		__this_00 = new AottgQuickPlay.d__25<RunQuickPlay>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
		this._routine = pUVar2;
		return;
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x57C8E00", Offset = "0x57C7E00", VA = "0x57C8E00")]
	[IteratorStateMachine(typeof(_003CRunQuickPlay_003Ed__25))]
	private IEnumerator RunQuickPlay()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$RunQuickPlay): clean
		AottgQuickPlay.d__25<RunQuickPlay> __this_00;

		__this_00 = new AottgQuickPlay.d__25<RunQuickPlay>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x57C8E90", Offset = "0x57C7E90", VA = "0x57C8E90")]
	[IteratorStateMachine(typeof(_003CQuickPlay_003Ed__26))]
	private IEnumerator QuickPlay()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$QuickPlay): clean
		AottgQuickPlay.d__26<QuickPlay> __this_00;

		__this_00 = new AottgQuickPlay.d__26<QuickPlay>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x57C84C0", Offset = "0x57C74C0", VA = "0x57C84C0")]
	private static AottgServerRegion? ChosenRegion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$ChosenRegion): 11 lines keep C-only constructs
		MultiplayerSettings pSVar1;
		IntSetting pSVar2;
		Vector2 UVar3;
		String pSVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		AottgServerRegion value;
		ulong uVar9;
		ulong uVar10;
		AottgServerRegion pGVar11;
		AottgServerRegion pGVar12;
		AottgServerRegion pGVar13;
		AottgServerRegion[] pGVar14;
		uint uVar15;

		pSVar1 = SettingsManager.MultiplayerSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.QuickPlayRegion, pSVar2 == null)) {
	label_058c8643: ;
			throw new NullReferenceException();
		}
		uVar15 = pSVar2._value - 1;
		if (-1 < (int)uVar15) {
			pGVar14 = AottgServerRegion.All;
			if (pGVar14 == null) goto label_058c8643;
			if ((int)uVar15 < (int)pGVar14.Length) {
				if ((typeof(AottgServerRegion)._2).cctor_finished_or_no_cctor == 0) {
					pGVar14 = AottgServerRegion.All;
					if (pGVar14 == null) goto label_058c8643;
				}
				if ((uint)pGVar14.Length <= uVar15) {
					throw new IndexOutOfRangeException();
				}
				UVar3 = pGVar14[uVar15].LabelPoint;
				uVar9 = pGVar14[uVar15].Id;
				uVar10 = pGVar14[uVar15].Label;
				value.Label = (String)uVar10;
				value.Id = (String)uVar9;
				pGVar11 = &pGVar14[uVar15];
				pSVar4 = pGVar11.MaskSprite;
				pGVar12 = &pGVar14[uVar15];
				uVar5 = (pGVar12.MaskArea).m_XMin;
				uVar6 = (pGVar12.MaskArea).m_YMin;
				value.MaskArea.m_YMin = (float)uVar6;
				value.MaskArea.m_XMin = (float)uVar5;
				uVar7 = (pGVar12.MaskArea).m_Width;
				uVar8 = (pGVar12.MaskArea).m_Height;
				value.MaskArea.m_Height = (float)uVar8;
				value.MaskArea.m_Width = (float)uVar7;
				pGVar13 = &__return_storage_ptr__.value;
				pGVar13.MaskArea.m_Width = 0.0;
				pGVar13.MaskArea.m_Height = 0.0;
				__return_storage_ptr__.value.LabelPoint = (Vector2)0x0;
				__return_storage_ptr__.value.MaskSprite = null;
				pGVar13 = &__return_storage_ptr__.value;
				pGVar13.MaskArea.m_XMin = 0.0;
				pGVar13.MaskArea.m_YMin = 0.0;
				__return_storage_ptr__.value.Label = null;
				*(ulong)&__return_storage_ptr__.value.Region = 0;
				*(ulong)&__return_storage_ptr__.fields = 0;
				__return_storage_ptr__.value.Id = null;
				value.Region = pGVar11.Region;
				value._20_4_ = *(uint)&pGVar11.field_0x14;
				value.MaskSprite = pSVar4;
				value.LabelPoint = UVar3;
				__return_storage_ptr__ = new Nullable<AottgServerRegion>(value);
				return __return_storage_ptr__;
			}
		}
		pGVar13 = &__return_storage_ptr__.value;
		pGVar13.MaskArea.m_Width = 0.0;
		pGVar13.MaskArea.m_Height = 0.0;
		__return_storage_ptr__.value.LabelPoint = (Vector2)0x0;
		__return_storage_ptr__.value.MaskSprite = null;
		pGVar13 = &__return_storage_ptr__.value;
		pGVar13.MaskArea.m_XMin = 0.0;
		pGVar13.MaskArea.m_YMin = 0.0;
		__return_storage_ptr__.value.Label = null;
		*(ulong)&__return_storage_ptr__.value.Region = 0;
		*(ulong)&__return_storage_ptr__.fields = 0;
		__return_storage_ptr__.value.Id = null;
		return __return_storage_ptr__;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x57C8F20", Offset = "0x57C7F20", VA = "0x57C8F20")]
	[IteratorStateMachine(typeof(_003CFindNearbyRegions_003Ed__28))]
	private static IEnumerator FindNearbyRegions(List<AottgServerRegion> regions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$FindNearbyRegions): clean
		AottgQuickPlay.d__28<FindNearbyRegions> __this;

		__this = new AottgQuickPlay.d__28<FindNearbyRegions>();
		__this.__1__state = 0;
		__this.regions = regions;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x57C8650", Offset = "0x57C7650", VA = "0x57C8650")]
	private static bool PingsFresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$PingsFresh): clean
		float fVar1;

		fVar1 = Time.unscaledTime;
		return fVar1 - AottgQuickPlay._pingStartedAt < 60.0;
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x57C86C0", Offset = "0x57C76C0", VA = "0x57C86C0")]
	private static void StartPings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$StartPings): 15 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		MultiplayerSettings pSVar4;
		List<AottgQuickPlay.RegionPing> pSVar5;
		AottgServerRegion[] pGVar6;
		String code;
		String pSVar7;
		Dictionary<MultiplayerRegion, string> __this;
		object @object;
		AottgQuickPlay.RegionPing[] pGVar8;
		ulong uVar9;
		ulong uVar10;
		ulong uVar11;
		ulong uVar12;
		AottgServerRegion pGVar13;
		int iVar15;
		ulong uVar16;
		WaitCallback __this_00;
		AottgQuickPlay.c__DisplayClass30_0 pGVar17;
		String pSVar18;
		String str2;
		Region __this_01;
		Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields pGVar19;
		Action<Region> __this_02;
		RegionPinger pPVar20;
		AottgQuickPlay.RegionPing __this_03;
		ulong uVar21;
		ulong puVar22;
		float fVar23;

		pSVar4 = SettingsManager.MultiplayerSettings;
		pSVar5 = AottgQuickPlay.Pings;
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			iVar2 = pSVar5._size;
			pSVar5._size = 0;
			if (0 < iVar2) {
				Array.Clear((Array)pSVar5._items, 0, iVar2);
			}
			fVar23 = Time.unscaledTime;
			AottgQuickPlay._pingStartedAt = fVar23;
			pGVar6 = AottgServerRegion.All;
			if (pGVar6 != null) {
				iVar15 = (int)pGVar6.Length;
				if (pSVar4 == null) {
					if (0 < iVar15) {
						pGVar17 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQuickPlay.c__DisplayClass30_0));
						pGVar17 = new Object();
						throw new NullReferenceException();
					}
				}
				else if (0 < iVar15) {
					uVar16 = pGVar6.Length & 0xffffffff;
					puVar22 = (ulong)&pGVar6[0].field_0x14;
					uVar21 = 0;
					do {
						if (uVar16 <= uVar21) {
							throw new IndexOutOfRangeException();
						}
						code = *(String*)((long)puVar22 + -0x14);
						pSVar7 = *(String*)((long)puVar22 + -0xc);
						iVar2 = *(int)((long)puVar22 + -4);
						fVar23 = *(float)(puVar22 + 4);
						uVar9 = puVar22[2];
						uVar10 = puVar22[3];
						uVar11 = *puVar22;
						uVar12 = puVar22[1];
						pGVar17 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgQuickPlay.c__DisplayClass30_0));
						pGVar17 = new Object();
						__this = pSVar4.PublicAddresses;
						if (__this == null) goto label_058c8bc3;
						pSVar18 = __this.get_Item(iVar2);
						str2 = (pSVar4.DefaultPort).ToString();
						pSVar18 = String.Concat(pSVar18, ":", str2);
						__this_01 = new Region(code, pSVar18);
						if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(AottgQuickPlay.c)) ;
							pGVar19 = typeof(AottgQuickPlay.c).static_fields;
							__this_02 = pGVar19.__9__30_0;
						}
						else {
							pGVar19 = typeof(AottgQuickPlay.c).static_fields;
							__this_02 = pGVar19.__9__30_0;
						}
						if (__this_02 == null) {
							if (((typeof(AottgQuickPlay.c))._2). cctor_finished_or_no_cctor == 0) {
								pGVar19 = typeof(AottgQuickPlay.c).static_fields;
							}
							@object = (object)pGVar19.__9;
							__this_02 = new Action<Region>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_StartPings_b__30_0);
							pGVar19 = typeof(AottgQuickPlay.c).static_fields;
							pGVar19.__9__30_0 = __this_02;
						}
						pPVar20 = new RegionPinger(__this_01, __this_02);
						if (pGVar17 == null) goto label_058c8bc3;
						pGVar17.pinger = pPVar20;
						pSVar5 = AottgQuickPlay.Pings;
						pPVar20 = pGVar17.pinger;
						__this_03 = new AottgQuickPlay.RegionPing();
						__this_03.Region.Id = code;
						__this_03.Region.Label = pSVar7;
						__this_03.Region.Region = iVar2;
						*(ulong)&__this_03.Region.field_0x14 = uVar11;
						*(ulong)((long)&__this_03.Region.MaskSprite + 4) = uVar12;
						pGVar13 = &__this_03.Region;
						pGVar13.MaskArea.m_YMin = (float)(int)uVar9;
						pGVar13.MaskArea.m_Width = (float)(int)((ulong)uVar9 >> 0x20);
						*(ulong)&__this_03.Region.MaskArea.m_Height = uVar10;
						__this_03.Region.LabelPoint.y = fVar23;
						__this_03._photonRegion = __this_01;
						__this_03._pinger = pPVar20;
						if (pSVar5 == null) goto label_058c8bc3;
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pGVar8 = pSVar5._items;
						if (pGVar8 == null) goto label_058c8bc3;
						uVar3 = pSVar5._size;
						if (uVar3 < (uint)pGVar8.Length) {
							pSVar5._size = uVar3 + 1;
							pGVar8[(int)uVar3] = __this_03;
						}
						else {
							pSVar5.AddWithResize((object)__this_03);
						}
						__this_00 = new WaitCallback((object)pGVar17, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass30_0_StartPings_b__1);
						ThreadPool.QueueUserWorkItem(__this_00);
						uVar21 = uVar21 + 1;
						uVar3 = (uint)pGVar6.Length;
						uVar16 = (ulong)uVar3;
						puVar22 = puVar22 + 7;
					} while ((long)uVar21 < (long)(int)uVar3);
				}
				return;
			}
		}
	label_058c8bc3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x57C9030", Offset = "0x57C8030", VA = "0x57C9030")]
	[IteratorStateMachine(typeof(_003CWaitForPings_003Ed__31))]
	private static IEnumerator WaitForPings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForPings): clean
		AottgQuickPlay.d__31<WaitForPings> __this;

		__this = new AottgQuickPlay.d__31<WaitForPings>();
		__this.__1__state = 0;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x57C90A0", Offset = "0x57C80A0", VA = "0x57C90A0")]
	private static List<RegionPing> Reachable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Reachable): 7 lines keep C-only constructs
		object pIVar1;
		Func<AottgQuickPlay.RegionPing, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields pGVar2;
		Func<AottgQuickPlay.RegionPing, int> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		List<AottgQuickPlay.RegionPing> pSVar3;

		pSVar3 = AottgQuickPlay.Pings;
		if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			__this = pGVar2.__9__32_0;
		}
		else {
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			__this = pGVar2.__9__32_0;
		}
		if (__this == null) {
			if (((typeof(AottgQuickPlay.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			}
			pIVar1 = (object)pGVar2.__9;
			__this = new Func<AottgQuickPlay.RegionPing, bool>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_0);
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			pGVar2.__9__32_0 = __this;
		}
		source = Enumerable.Where<AottgQuickPlay.RegionPing>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__bool__o)__this) ;
		if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			__this_00 = pGVar2.__9__32_1;
		}
		else {
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			__this_00 = pGVar2.__9__32_1;
		}
		if (__this_00 == null) {
			if (((typeof(AottgQuickPlay.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			}
			pIVar1 = (object)pGVar2.__9;
			__this_00 = new Func<AottgQuickPlay.RegionPing, int>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_Reachable_b__32_1);
			pGVar2 = typeof(AottgQuickPlay.c).static_fields;
			pGVar2.__9__32_1 = __this_00;
		}
		source_00 = Enumerable.OrderBy<AottgQuickPlay.RegionPing, int>(source, (System_Func_TSource__TKey__o)__this_00);
		pSVar3 = (List<AottgQuickPlay.RegionPing>)Enumerable.ToList<AottgQuickPlay.RegionPing>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return pSVar3;
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x57C92D0", Offset = "0x57C82D0", VA = "0x57C92D0")]
	[IteratorStateMachine(typeof(_003CWaitForRoomList_003Ed__33))]
	private static IEnumerator WaitForRoomList()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForRoomList): clean
		AottgQuickPlay.d__33<WaitForRoomList> __this;

		__this = new AottgQuickPlay.d__33<WaitForRoomList>();
		__this.__1__state = 0;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x57C9340", Offset = "0x57C8340", VA = "0x57C9340")]
	[IteratorStateMachine(typeof(_003CConnectToLobby_003Ed__34))]
	private static IEnumerator ConnectToLobby(MultiplayerRegion region, Action<bool> done)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$ConnectToLobby): clean
		AottgQuickPlay.d__34<ConnectToLobby> __this;

		__this = new AottgQuickPlay.d__34<ConnectToLobby>();
		__this.__1__state = 0;
		__this.region = region;
		__this.done = done;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x57C93D0", Offset = "0x57C83D0", VA = "0x57C93D0")]
	[IteratorStateMachine(typeof(_003CWaitForJoin_003Ed__35))]
	private static IEnumerator WaitForJoin(Action<bool> done)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$WaitForJoin): clean
		AottgQuickPlay.d__35<WaitForJoin> __this;

		__this = new AottgQuickPlay.d__35<WaitForJoin>();
		__this.__1__state = 0;
		__this.done = done;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x57C9460", Offset = "0x57C8460", VA = "0x57C9460")]
	private static bool IsJoining()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$IsJoining): clean
		int iVar1;

		iVar1 = PhotonNetwork.NetworkClientState;
		return iVar1 - 0x10U < 0xfffffffe && iVar1 != 4;
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x57C94B0", Offset = "0x57C84B0", VA = "0x57C94B0")]
	private static RoomInfo PickRoom(HashSet<string> tried)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$PickRoom): 4 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		uint uVar2;
		AottgQuickPlay.c__DisplayClass37_0 __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o source;
		Func<RoomInfo, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Object[] pSVar3;

		__this_00 = new AottgQuickPlay.c__DisplayClass37_0();
		if (__this_00 != null) {
			__this_00.tried = tried;
			bVar1 = AccountManager.IsLoggedIn;
			__this_00.loggedIn = bVar1;
			__this = (Dictionary<object, object>)MainMenuGameManager.RoomList;
			if (__this != null) {
				source = __this.Values;
				__this_01 = new Func<RoomInfo, bool>((object)__this_00, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c__DisplayClass37_0_PickRoom_b__0);
				source_00 = Enumerable.Where<RoomInfo>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
				pSVar3 = Enumerable.ToArray<RoomInfo>(source_00);
				if (pSVar3 != null) {
					if (pSVar3.Length == 0) {
						return null;
					}
					uVar2 = Random.Range(0, (int32_t)pSVar3.Length);
					if ((uint)pSVar3.Length <= uVar2) {
						throw new IndexOutOfRangeException();
					}
					return (RoomInfo)pSVar3[(int)uVar2];
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x57C9670", Offset = "0x57C8670", VA = "0x57C9670")]
	[IteratorStateMachine(typeof(_003CHost_003Ed__38))]
	private IEnumerator Host(MultiplayerRegion region, bool inRegionLobby)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Host): clean
		AottgQuickPlay.d__38<Host> __this_00;

		__this_00 = new AottgQuickPlay.d__38<Host>();
		__this_00.__1__state = 0;
		__this_00.region = region;
		__this_00.inRegionLobby = inRegionLobby;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x57C96F0", Offset = "0x57C86F0", VA = "0x57C96F0")]
	private static InGameSet HostGame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$HostGame): 2 lines keep C-only constructs
		uint uVar1;
		List<Experience> source;
		object @object;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		StringSetting pSVar4;
		InGameMiscSettings pSVar5;
		BoolSetting __this;
		bool bVar6;
		Gisketch_Aottg2UI_Game_AottgQuickPlay___c_StaticFields pGVar7;
		Func<Experience, bool> __this_00;
		Experience experience;

		AottgGameCreateSession.Begin(1, true);
		if (Il2CppMethodInitialized_075454e6 == false) {
			Il2CppMethodInitialized_075454e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source = AottgGameCreateSession.ExperiencesInternal;
		if ((typeof(AottgQuickPlay.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar7 = typeof(AottgQuickPlay.c).static_fields;
			__this_00 = pGVar7.__9__39_0;
		}
		else {
			pGVar7 = typeof(AottgQuickPlay.c).static_fields;
			__this_00 = pGVar7.__9__39_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgQuickPlay.c))._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgQuickPlay.c).static_fields;
			}
			@object = (object)pGVar7.__9;
			__this_00 = new Func<Experience, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay_c_HostGame_b__39_0);
			pGVar7 = typeof(AottgQuickPlay.c).static_fields;
			pGVar7.__9__39_0 = __this_00;
		}
		experience = Enumerable.FirstOrDefault<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if (experience == null) {
			return null;
		}
		AottgGameCreateSession.SelectExperience(experience);
		bVar6 = AottgGameCreateSession.CanStart;
		if (!bVar6) {
			return null;
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		}
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.General, pSVar3 != null)) &&(pSVar4 = pSVar3.RoomName, pSVar4 != null)) {
			pSVar4.Value = (Il2CppObject *)"FoodForTitan";
			pSVar3 = pSVar2.General;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.Password, pSVar4 != null)) {
				pSVar4.Value = (@object)**(ulong*)(g_data_07556758 + 0xb8);
				pSVar5 = pSVar2.Misc;
				if ((pSVar5 != null) &&(__this = pSVar5.AccountRequired, __this != null)) {
					__this.Value = false;
					return pSVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x57C99F0", Offset = "0x57C89F0", VA = "0x57C99F0")]
	private static void Fail(string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Fail): clean
		MultiplayerSettings __this;
		bool bVar1;

		AottgQuickPlay.Toast(0, "exclamation", message);
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = PhotonNetwork.IsConnected;
		}
		else {
			bVar1 = PhotonNetwork.IsConnected;
		}
		if (bVar1) {
			__this = SettingsManager.MultiplayerSettings;
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Disconnect();
			return;
		}
		return;
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x57C9AC0", Offset = "0x57C8AC0", VA = "0x57C9AC0")]
	private static void Toast(AottgToastVariant variant, string icon, string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Toast): clean
		GisketchUIRoot __this;
		String title;
		AottgToastDefinition __this_00;

		__this = AottgGisketchUiHost.Root;
		title = Aottg2GisketchLocale.Text("MainMenu.QuickPlay.Title");
		__this_00 = new AottgToastDefinition(variant, icon, title, message, "multiplayer.quick-play");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ShowToast(__this_00);
		return;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x57C9BB0", Offset = "0x57C8BB0", VA = "0x57C9BB0")]
	private static string Text(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$Text): clean
		String pSVar1;

		pSVar1 = String.Concat("MainMenu.QuickPlay.", item);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x57C9C30", Offset = "0x57C8C30", VA = "0x57C9C30")]
	public AottgQuickPlay()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c (Gisketch.Aottg2UI.Game.AottgQuickPlay$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c.

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass37_0$$.ctor: clean
	private void c__DisplayClass37_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay$$.cctor: clean
	static AottgQuickPlay()
	{
		List<AottgQuickPlay.RegionPing> __this;

		__this = new List<AottgQuickPlay.RegionPing>();
		AottgQuickPlay.Pings = __this;
		AottgQuickPlay._pingStartedAt = -INFINITY;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgQuickPlay.c();
		AottgQuickPlay.c.__9 =(AottgQuickPlay.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<FindNearbyRegions>b__28_1: 4 lines keep C-only constructs
	private AottgServerRegion c__FindNearbyRegions_b__28_1(AottgQuickPlay.RegionPing ping)
	{
		String pSVar1;
		String pSVar2;
		String pSVar3;
		AottgServerRegion pGVar4;
		AottgServerRegion pGVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		int iVar9;
		uint uVar10;

		if (ping == null) {
			throw new NullReferenceException();
		}
		__return_storage_ptr__.LabelPoint = ping.Region.LabelPoint;
		pSVar1 = ping.Region.Id;
		pSVar2 = ping.Region.Label;
		iVar9 = ping.Region.Region;
		uVar10 = *(uint)&ping.Region.field_0x14;
		pSVar3 = ping.Region.MaskSprite;
		pGVar4 = &ping.Region;
		fVar6 = pGVar4.MaskArea.m_YMin;
		pGVar5 = &ping.Region;
		fVar7 = pGVar5.MaskArea.m_Width;
		fVar8 = pGVar5.MaskArea.m_Height;
		__return_storage_ptr__.MaskArea.m_XMin = pGVar4.MaskArea.m_XMin;
		__return_storage_ptr__.MaskArea.m_YMin = fVar6;
		__return_storage_ptr__.MaskArea.m_Width = fVar7;
		__return_storage_ptr__.MaskArea.m_Height = fVar8;
		__return_storage_ptr__.Region = iVar9;
		*(uint)&__return_storage_ptr__.field_0x14 = uVar10;
		__return_storage_ptr__.MaskSprite = pSVar3;
		__return_storage_ptr__.Id = pSVar1;
		__return_storage_ptr__.Label = pSVar2;
		return __return_storage_ptr__;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<StartPings>b__30_0: clean
	private void c__StartPings_b__30_0(Region __)
	{
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<WaitForPings>b__31_0: clean
	private bool c__WaitForPings_b__31_0(AottgQuickPlay.RegionPing ping)
	{
		RegionPinger pPVar1;

		if ((ping == null) ||(pPVar1 = ping._pinger, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return pPVar1._Done_k__BackingField;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<Reachable>b__32_0: clean
	private bool c__Reachable_b__32_0(AottgQuickPlay.RegionPing ping)
	{
		int iVar1;
		RegionPinger pPVar2;
		Region pPVar3;

		if ((ping != null) &&(pPVar2 = ping._pinger, pPVar2 != null)) {
			if (pPVar2._Done_k__BackingField == false) {
				return false;
			}
			pPVar3 = ping._photonRegion;
			if (pPVar3 != null) {
				iVar1 = pPVar3._Ping_k__BackingField;
				return iVar1 < RegionPinger.PingWhenFailed;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<Reachable>b__32_1: clean
	private int c__Reachable_b__32_1(AottgQuickPlay.RegionPing ping)
	{
		Region pPVar1;

		if ((ping == null) ||(pPVar1 = ping._photonRegion, pPVar1 == null)) {
			throw new NullReferenceException();
		}
		return pPVar1._Ping_k__BackingField;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c$$<HostGame>b__39_0: clean
	private bool c__HostGame_b__39_0(Experience item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item.Category == "Casual");
		if (bVar1) {
			bVar1 = (item.SubCategory == "VS Titans");
			if (bVar1) {
				bVar1 = (item.Name == "Waves");
				return bVar1;
			}
		}
		return false;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass30_0$$<StartPings>b__1: clean
	private void c__DisplayClass30_0__StartPings_b__1(object __)
	{
		RegionPinger __this_00;

		__this_00 = this.pinger;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Start();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgQuickPlay.<>c__DisplayClass37_0$$<PickRoom>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass37_0__PickRoom_b__0(RoomInfo room)
	{
		uint uVar1;
		HashSet<object> __this_00;
		bool bVar2;
		String a;

		if (Il2CppMethodInitialized_0754543f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754543f = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AottgRoomList.IsValid(room);
		}
		else {
			bVar2 = AottgRoomList.IsValid(room);
		}
		if (bVar2) {
			if ((room == null) ||(__this_00 = (HashSet<object>)this.tried, __this_00 == null)) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.Contains((object)room.name);
			if (((!bVar2) && (room.isOpen != false)) &&(room._PlayerCount_k__BackingField < room.maxPlayers)) {
				if (Il2CppMethodInitialized_07545465 == false) {
					Il2CppMethodInitialized_07545465 = true;
					uVar1 = (typeof(RoomProperty)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(RoomProperty))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				a = PhotonExtensions.GetStringProperty(room, RoomProperty.PasswordHash, "");
				bVar2 = (a == (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar2) {
					if (this.loggedIn != false) {
						return true;
					}
					bVar2 = PhotonExtensions.GetBoolProperty(room, RoomProperty.AccountRequired, false);
					return !bVar2;
				}
				return false;
			}
		}
		return false;
	}
}
