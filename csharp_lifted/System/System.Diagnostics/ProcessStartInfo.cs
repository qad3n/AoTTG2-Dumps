// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.ProcessStartInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security;
using System.Text;
using Il2CppDummyDll;

namespace System.Diagnostics;

[StructLayout(LayoutKind.Sequential)]
[Token(Token = "0x20000D7")]
[TypeConverter(typeof(ExpandableObjectConverter))]
public sealed class ProcessStartInfo
{
	[Token(Token = "0x40003EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string fileName;

	[Token(Token = "0x40003EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string arguments;

	[Token(Token = "0x40003F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string directory;

	[Token(Token = "0x40003F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string verb;

	[Token(Token = "0x40003F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ProcessWindowStyle windowStyle;

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool errorDialog;

	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr errorDialogParentHandle;

	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool useShellExecute;

	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string userName;

	[Token(Token = "0x40003F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string domain;

	[Token(Token = "0x40003F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private SecureString password;

	[Token(Token = "0x40003F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string passwordInClearText;

	[Token(Token = "0x40003FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool loadUserProfile;

	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	private bool redirectStandardInput;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
	private bool redirectStandardOutput;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B")]
	private bool redirectStandardError;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Encoding standardOutputEncoding;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Encoding standardErrorEncoding;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool createNoWindow;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WeakReference weakParentProcess;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal StringDictionary environmentVariables;

	[Token(Token = "0x4000403")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] empty;

	[Token(Token = "0x4000404")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Collection<string> _argumentList;

	[Token(Token = "0x4000405")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IDictionary<string, string> environment;

	[Token(Token = "0x170000E3")]
	public Collection<string> ArgumentList
	{
		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x62072D0", Offset = "0x62062D0", VA = "0x62072D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	[DefaultValue("")]
	[MonitoringDescription("Command line arguments that will be passed to the application specified by the FileName property.")]
	[SettingsBindable(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[NotifyParentProperty(true)]
	public string Arguments
	{
		[Token(Token = "0x60004FF")]
		[Address(RVA = "0x6207370", Offset = "0x6206370", VA = "0x6207370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000500")]
		[Address(RVA = "0x6207400", Offset = "0x6206400", VA = "0x6207400")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	[Editor("System.Diagnostics.Design.StringDictionaryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[DefaultValue(null)]
	[MonitoringDescription("Set of environment variables that apply to this process and child processes.")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	[NotifyParentProperty(true)]
	public StringDictionary EnvironmentVariables
	{
		[Token(Token = "0x6000501")]
		[Address(RVA = "0x6206D30", Offset = "0x6205D30", VA = "0x6206D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E6")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process command input is read from the Process instance's StandardInput member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardInput
	{
		[Token(Token = "0x6000502")]
		[Address(RVA = "0x6207410", Offset = "0x6206410", VA = "0x6207410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	[DefaultValue(false)]
	[NotifyParentProperty(true)]
	[MonitoringDescription("Whether the process output is written to the Process instance's StandardOutput member.")]
	public bool RedirectStandardOutput
	{
		[Token(Token = "0x6000503")]
		[Address(RVA = "0x6207420", Offset = "0x6206420", VA = "0x6207420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process's error output is written to the Process instance's StandardError member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardError
	{
		[Token(Token = "0x6000504")]
		[Address(RVA = "0x6207430", Offset = "0x6206430", VA = "0x6207430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public Encoding StandardErrorEncoding
	{
		[Token(Token = "0x6000505")]
		[Address(RVA = "0x6207440", Offset = "0x6206440", VA = "0x6207440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	public Encoding StandardOutputEncoding
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x6207450", Offset = "0x6206450", VA = "0x6207450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	[DefaultValue(true)]
	[MonitoringDescription("Whether to use the operating system shell to start the process.")]
	[NotifyParentProperty(true)]
	public bool UseShellExecute
	{
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x6207460", Offset = "0x6206460", VA = "0x6207460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	[NotifyParentProperty(true)]
	public string UserName
	{
		[Token(Token = "0x6000508")]
		[Address(RVA = "0x62069B0", Offset = "0x62059B0", VA = "0x62069B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	public SecureString Password
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x6207470", Offset = "0x6206470", VA = "0x6207470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	[NotifyParentProperty(true)]
	public string Domain
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x62073D0", Offset = "0x62063D0", VA = "0x62073D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EF")]
	[NotifyParentProperty(true)]
	public bool LoadUserProfile
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x6207480", Offset = "0x6206480", VA = "0x6207480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	[SettingsBindable(true)]
	[NotifyParentProperty(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[MonitoringDescription("The name of the application, document or URL to start.")]
	[Editor("System.Diagnostics.Design.StartFileNameEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[DefaultValue("")]
	public string FileName
	{
		[Token(Token = "0x600050C")]
		[Address(RVA = "0x6204EE0", Offset = "0x6203EE0", VA = "0x6204EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F1")]
	[NotifyParentProperty(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[SettingsBindable(true)]
	[Editor("System.Diagnostics.Design.WorkingDirectoryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[DefaultValue("")]
	[MonitoringDescription("The initial working directory for the process.")]
	public string WorkingDirectory
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x62073A0", Offset = "0x62063A0", VA = "0x62073A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F2")]
	internal bool HaveEnvVars
	{
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x6206D20", Offset = "0x6205D20", VA = "0x6206D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public Encoding StandardInputEncoding
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x6207490", Offset = "0x6206490", VA = "0x6207490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x6204260", Offset = "0x6203260", VA = "0x6204260")]
	internal ProcessStartInfo(Process parent)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x6206600", Offset = "0x6205600", VA = "0x6206600")]
	public ProcessStartInfo(string fileName)
	{
	}
}
