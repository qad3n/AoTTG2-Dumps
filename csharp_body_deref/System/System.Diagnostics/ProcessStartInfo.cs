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

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20000D6")]
[TypeConverter(typeof(ExpandableObjectConverter))]
public sealed class ProcessStartInfo
{
	[Token(Token = "0x40003EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string fileName;

	[Token(Token = "0x40003EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string arguments;

	[Token(Token = "0x40003ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string directory;

	[Token(Token = "0x40003EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string verb;

	[Token(Token = "0x40003EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ProcessWindowStyle windowStyle;

	[Token(Token = "0x40003F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool errorDialog;

	[Token(Token = "0x40003F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr errorDialogParentHandle;

	[Token(Token = "0x40003F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool useShellExecute;

	[Token(Token = "0x40003F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string userName;

	[Token(Token = "0x40003F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string domain;

	[Token(Token = "0x40003F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private SecureString password;

	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string passwordInClearText;

	[Token(Token = "0x40003F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool loadUserProfile;

	[Token(Token = "0x40003F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	private bool redirectStandardInput;

	[Token(Token = "0x40003F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
	private bool redirectStandardOutput;

	[Token(Token = "0x40003FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B")]
	private bool redirectStandardError;

	[Token(Token = "0x40003FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Encoding standardOutputEncoding;

	[Token(Token = "0x40003FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Encoding standardErrorEncoding;

	[Token(Token = "0x40003FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool createNoWindow;

	[Token(Token = "0x40003FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WeakReference weakParentProcess;

	[Token(Token = "0x40003FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal StringDictionary environmentVariables;

	[Token(Token = "0x4000400")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly string[] empty;

	[Token(Token = "0x4000401")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Collection<string> _argumentList;

	[Token(Token = "0x4000402")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IDictionary<string, string> environment;

	[Token(Token = "0x170000D9")]
	public Collection<string> ArgumentList
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x4606720", Offset = "0x4606720", VA = "0x4606720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[NotifyParentProperty(true)]
	[SettingsBindable(true)]
	[DefaultValue("")]
	[MonitoringDescription("Command line arguments that will be passed to the application specified by the FileName property.")]
	public string Arguments
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x46067C0", Offset = "0x46067C0", VA = "0x46067C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x4606850", Offset = "0x4606850", VA = "0x4606850")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	[NotifyParentProperty(true)]
	[DefaultValue(null)]
	[MonitoringDescription("Set of environment variables that apply to this process and child processes.")]
	[Editor("System.Diagnostics.Design.StringDictionaryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public StringDictionary EnvironmentVariables
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x46060C0", Offset = "0x46060C0", VA = "0x46060C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DC")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process command input is read from the Process instance's StandardInput member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardInput
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x4606860", Offset = "0x4606860", VA = "0x4606860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	[NotifyParentProperty(true)]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process output is written to the Process instance's StandardOutput member.")]
	public bool RedirectStandardOutput
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x4606870", Offset = "0x4606870", VA = "0x4606870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	[DefaultValue(false)]
	[MonitoringDescription("Whether the process's error output is written to the Process instance's StandardError member.")]
	[NotifyParentProperty(true)]
	public bool RedirectStandardError
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x4606880", Offset = "0x4606880", VA = "0x4606880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public Encoding StandardErrorEncoding
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x4606890", Offset = "0x4606890", VA = "0x4606890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E0")]
	public Encoding StandardOutputEncoding
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x46068A0", Offset = "0x46068A0", VA = "0x46068A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	[DefaultValue(true)]
	[MonitoringDescription("Whether to use the operating system shell to start the process.")]
	[NotifyParentProperty(true)]
	public bool UseShellExecute
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x46068B0", Offset = "0x46068B0", VA = "0x46068B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E2")]
	[NotifyParentProperty(true)]
	public string UserName
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x4605D00", Offset = "0x4605D00", VA = "0x4605D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public SecureString Password
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x46068C0", Offset = "0x46068C0", VA = "0x46068C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E4")]
	[NotifyParentProperty(true)]
	public string Domain
	{
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x4606820", Offset = "0x4606820", VA = "0x4606820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E5")]
	[NotifyParentProperty(true)]
	public bool LoadUserProfile
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x46068D0", Offset = "0x46068D0", VA = "0x46068D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	[MonitoringDescription("The name of the application, document or URL to start.")]
	[DefaultValue("")]
	[SettingsBindable(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[NotifyParentProperty(true)]
	[Editor("System.Diagnostics.Design.StartFileNameEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	public string FileName
	{
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x4603F50", Offset = "0x4603F50", VA = "0x4603F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E7")]
	[MonitoringDescription("The initial working directory for the process.")]
	[DefaultValue("")]
	[Editor("System.Diagnostics.Design.WorkingDirectoryEditor, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.Drawing.Design.UITypeEditor, System.Drawing, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[NotifyParentProperty(true)]
	[TypeConverter("System.Diagnostics.Design.StringValueConverter, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a")]
	[SettingsBindable(true)]
	public string WorkingDirectory
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x46067F0", Offset = "0x46067F0", VA = "0x46067F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E8")]
	internal bool HaveEnvVars
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x46060B0", Offset = "0x46060B0", VA = "0x46060B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	public Encoding StandardInputEncoding
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x46068E0", Offset = "0x46068E0", VA = "0x46068E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4603240", Offset = "0x4603240", VA = "0x4603240")]
	internal ProcessStartInfo(Process parent)
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4605940", Offset = "0x4605940", VA = "0x4605940")]
	public ProcessStartInfo(string fileName)
	{
	}
}
